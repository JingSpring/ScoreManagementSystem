// AddMessageDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ScoreManagementSystem.h"
#include "AddMessageDlg.h"
#include "CStudentMessage.h"
#include "ScoreManagementSystemDlg.h"

CStuFile theStu("student.txt");     //定义一个全局变量

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddMessageDlg dialog

CAddMessageDlg::CAddMessageDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddMessageDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddMessageDlg)
	m_strName = _T("");
	m_strID = _T("");
	m_strClass = _T("");
	m_strGrade = _T("");
	m_fChinese = 0.0f;
	m_fch = 0.0f;
	m_fEnglish = 0.0f;
	m_fg = 0.0f;
	m_fMath = 0.0f;
	m_fph = 0.0f;
	//}}AFX_DATA_INIT
}


void CAddMessageDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddMessageDlg)
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDV_MaxChars(pDX, m_strName, 20);
	DDX_Text(pDX, IDC_EDIT_ID, m_strID);
	DDV_MaxChars(pDX, m_strID, 20);
	DDX_CBString(pDX, IDC_COMBO_CLASS, m_strClass);
	DDV_MaxChars(pDX, m_strClass, 20);
	DDX_CBString(pDX, IDC_COMBO_GRADE, m_strGrade);
	DDX_Text(pDX, IDC_EDIT_C, m_fChinese);
	DDV_MinMaxFloat(pDX, m_fChinese, 0.f, 150.f);
	DDX_Text(pDX, IDC_EDIT_CH, m_fch);
	DDV_MinMaxFloat(pDX, m_fch, 0.f, 100.f);
	DDX_Text(pDX, IDC_EDIT_E, m_fEnglish);
	DDV_MinMaxFloat(pDX, m_fEnglish, 0.f, 150.f);
	DDX_Text(pDX, IDC_EDIT_G, m_fg);
	DDV_MinMaxFloat(pDX, m_fg, 0.f, 100.f);
	DDX_Text(pDX, IDC_EDIT_M, m_fMath);
	DDV_MinMaxFloat(pDX, m_fMath, 0.f, 150.f);
	DDX_Text(pDX, IDC_EDIT_P, m_fph);
	DDV_MinMaxFloat(pDX, m_fph, 0.f, 100.f);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddMessageDlg, CDialog)
	//{{AFX_MSG_MAP(CAddMessageDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddMessageDlg message handlers

void CAddMessageDlg::OnOK() 
{
	// TODO: Add extra validation here
    UpdateData();
    m_strName.TrimLeft();
    m_strName.TrimRight();
    m_strID.TrimLeft();
    m_strID.TrimRight();
    if(m_strName.IsEmpty())
    {
        MessageBox("姓名不能为空！","提示");
        return;
    }
    if(m_strID.IsEmpty())
    {
        MessageBox("学号不能为空！","提示");
        return;
    }
    if(m_strClass.IsEmpty())
    {
        MessageBox("班级不能为空！","提示");
        return;
    }
    if(m_strGrade.IsEmpty())
    {
        MessageBox("年级不能为空！","提示");
        return;
    }
    CStudentMessage pStudent;
    CStudentMessage stu;
    strncpy(pStudent.stuID,(LPCTSTR)m_strID,sizeof(pStudent.stuID));
    if(theStu.FindSame(pStudent.stuID,stu)>=0)
    {
        MessageBox("该学生成绩已存在！！","警告",0);
        return;
    }
    else
    {
        strncpy(pStudent.stuName,(LPCTSTR)m_strName,sizeof(pStudent.stuName));
        strncpy(pStudent.stuID,(LPCTSTR)m_strID,sizeof(pStudent.stuID));
        strncpy(pStudent.stuClass,(LPCTSTR)m_strClass,sizeof(pStudent.stuClass));
        strncpy(pStudent.stuGrade,(LPCTSTR)m_strGrade,sizeof(pStudent.stuGrade));
        
        pStudent.score1=m_fChinese;
        pStudent.score2=m_fMath;
        pStudent.score3=m_fEnglish;
        pStudent.score4=m_fph;
        pStudent.score5=m_fch;
        pStudent.score6=m_fg;
        pStudent.IntegratedScience=(float)(m_fph+m_fch+m_fg);
        pStudent.TotalScore=(float)(m_fChinese+m_fMath+m_fEnglish+m_fph+m_fch+m_fg);
        theStu.Add(pStudent);
    }
    CDialog::OnOK();
}
