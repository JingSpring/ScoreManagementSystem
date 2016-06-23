// ScoreManagementSystemDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ScoreManagementSystem.h"
#include "ScoreManagementSystemDlg.h"
#include "AddMessageDlg.h"
#include "DELMessageDig.h"
#include "SELECTMessageDlg.h"
#include "CStudentMessage.h"
#include "ALTERDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScoreManagementSystemDlg dialog

CScoreManagementSystemDlg::CScoreManagementSystemDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScoreManagementSystemDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CScoreManagementSystemDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CScoreManagementSystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CScoreManagementSystemDlg)
	DDX_Control(pDX, IDC_LIST_DOWN, m_downList);
	DDX_Control(pDX, IDC_LIST_SCORE, m_scoreList);
	DDX_Control(pDX, IDC_LIST_STUDENT, m_studentList);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CScoreManagementSystemDlg, CDialog)
	//{{AFX_MSG_MAP(CScoreManagementSystemDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DEL, OnButtonDel)
	ON_BN_CLICKED(IDC_BUTTON_SELECT, OnButtonSelect)
	ON_BN_CLICKED(IDC_BUTTON_ALTER, OnButtonAlter)
	ON_BN_CLICKED(IDC_BUTTON_SHOW, OnButtonShow)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScoreManagementSystemDlg message handlers

BOOL CScoreManagementSystemDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	//设置列表表头
	char* studentTitle[13] = {"排名","姓名","学号","班级","年级","语文成绩","数学成绩","英语成绩","物理成绩","化学成绩","生物成绩","理综成绩","总分成绩"};
	char* ScoreStatistics[8] = {"语文平均分","数学平均分","英语平均分","物理平均分","化学平均分","生物平均分","理综平均分","总平均分"};
	char* SituationTitle[6] = {"姓名","学号","班级","年级","不及格科目","分数"};
	for(int nCol=0;nCol<13;nCol++)
	{
		m_studentList.InsertColumn(nCol,studentTitle[nCol],LVCFMT_CENTER,76,20);
	}
	for(int sCol=0;sCol<8;sCol++)
	{
		m_scoreList.InsertColumn(sCol,ScoreStatistics[sCol],LVCFMT_CENTER,110,40);
	}
	for(int tCol=0;tCol<6;tCol++)
	{
		m_downList.InsertColumn(tCol,SituationTitle[tCol],LVCFMT_CENTER,145,30);
	}

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CScoreManagementSystemDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CScoreManagementSystemDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CScoreManagementSystemDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
//增加
void CScoreManagementSystemDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	 CAddMessageDlg addDlg;
    if(IDOK==addDlg.DoModal())          //弹出增加学生成绩对话框
    {
        operationFile();
    }
}
//删除
void CScoreManagementSystemDlg::OnButtonDel() 
{
	// TODO: Add your control notification handler code here
	CDELMessageDig delDlg;
	delDlg.DoModal();
}
//查找
void CScoreManagementSystemDlg::OnButtonSelect() 
{
	// TODO: Add your control notification handler code here
	CSELECTMessageDlg selectDlg;
	selectDlg.DoModal();
}
//修改
void CScoreManagementSystemDlg::OnButtonAlter() 
{
	// TODO: Add your control notification handler code here
	CALTERDlg alterDlg;
	alterDlg.DoModal();
}
//排序
void CScoreManagementSystemDlg::OnButtonShow() 
{
	// TODO: Add your control notification handler code here
	operationFile();
}

void CScoreManagementSystemDlg::operationFile()
{
	m_studentList.DeleteAllItems();
    int i;
    CString str;
    CString str1;
    CString str2;
    CString str3;
    CString str4;
    CString str5;
    CString str6;
    CString str7;
    CString str8;
    CString str9;
    CString str10;
    CString str11;
    CString str12;
    fstream file("student.txt",ios::in|ios::nocreate);
    if(!file)
    {
        MessageBox(NULL,"文件无法打开!",0);
        return;
    }
    i=0;
    while(!file.eof())
    {
        CStudentMessage stu;
        file>>stu;
        str.Format("%d",i+1);
        str1.Format("%s",stu.stuName);
        str2.Format("%s",stu.stuID);
        str3.Format("%s",stu.stuClass);
        str4.Format("%s",stu.stuGrade);
        str5.Format("%0.1f",stu.score1);
        str6.Format("%0.1f",stu.score2);
        str7.Format("%0.1f",stu.score3);
        str8.Format("%0.1f",stu.score4);
        str9.Format("%0.1f",stu.score5);
        str10.Format("%0.1f",stu.score6);
        str11.Format("%0.1f",stu.IntegratedScience);
        str12.Format("%0.1f",stu.TotalScore);
        m_studentList.InsertItem(i,str);
        m_studentList.SetItemText(i,1,str1);
        m_studentList.SetItemText(i,2,str2);
        m_studentList.SetItemText(i,3,str3);
        m_studentList.SetItemText(i,4,str4);
        m_studentList.SetItemText(i,5,str5);
        m_studentList.SetItemText(i,6,str6);
        m_studentList.SetItemText(i,7,str7);
        m_studentList.SetItemText(i,8,str8);
        m_studentList.SetItemText(i,9,str9);
        m_studentList.SetItemText(i,10,str10);
        m_studentList.SetItemText(i,11,str11);
        m_studentList.SetItemText(i,12,str12);
        i++;
    }
    UpdateData(FALSE);
}


