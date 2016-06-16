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
	int rank=0;
	rank++;
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
	CAddMessageDlg addDlg;
	CStudentMessage pStudent;
	pStudent.stuName=addDlg.m_strName;
    pStudent.stuID=addDlg.m_strID;
    pStudent.stuClass=addDlg.m_strClass;
	pStudent.stuGrade=addDlg.m_strGrade;
	pStudent.score1=addDlg.m_fChinese;
    pStudent.score2=addDlg.m_fMath;
	pStudent.score3=addDlg.m_fEnglish;
	pStudent.score4=addDlg.m_fph;
	pStudent.score5=addDlg.m_fch;
	pStudent.score6=addDlg.m_fg;
	theStu.Add(pStudent);
	//CString str;
	//str.Format("%d  %s  %s  %s  %s  %f  %f  %f  %f  %f  %f  %f  %f",rank,addDlg.m_strName,addDlg.m_strID,addDlg.m_strClass,addDlg.m_strGrade,addDlg.m_fChinese,addDlg.m_fMath,addDlg.m_fEnglish,addDlg.m_fph,addDlg.m_fch,addDlg.m_fg,pStudent.IntegratedScience,pStudent.TotalScore);
	//char* data[13] = {(char *)&rank,(char *)&addDlg.m_strName,(char *)&addDlg.m_strID,(char *)&addDlg.m_strClass,(char *)&addDlg.m_strGrade,(char *)&addDlg.m_fChinese,(char *)&addDlg.m_fMath,addDlg.m_fEnglish,addDlg.m_fph,addDlg.m_fch,addDlg.m_fg,pStudent.IntegratedScience,pStudent.TotalScore};
	//scoreDlg.m_studentList.InsertColumn(rank,(char *)&str,LVCFMT_CENTER,76,20);
	CDialog::OnOK();
}
