// ScoreManagementSystemDlg.h : header file
//

#if !defined(AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_)
#define AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CScoreManagementSystemDlg dialog
class CStudentMessage
{
public:
    CStudentMessage(CString name,CString id,CString clas,float s1,float s2,float s3,float s4,float s5,float s6)
	{
		stuName=name;
		stuID=id;
		stuClass=clas;
		stuScore[0]=s1;
		stuScore[1]=s2;
		stuScore[2]=s3;
		stuScore[3]=s4;
		stuScore[4]=s5;
		stuScore[5]=s6;
        IntegratedScience=s4+s5+s6;
	}
	CStudentMessage(){};           //���캯��
	~CStudentMessage(){};         //��������
	CString stuName;             //ѧ������
	CString stuID;              //ѧ��
	CString stuClass;          //���
	float  stuScore[6];       //���Ƴɼ�
	float IntegratedScience;  //���۳ɼ�
};
class CScoreManagementSystemDlg : public CDialog
{
// Construction
public:
	CScoreManagementSystemDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CScoreManagementSystemDlg)
	enum { IDD = IDD_SCOREMANAGEMENTSYSTEM_DIALOG };
	CListCtrl	m_downList;
	CListCtrl	m_scoreList;
	CListCtrl	m_studentList;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScoreManagementSystemDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CScoreManagementSystemDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonDel();
	afx_msg void OnButtonSelect();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_)
