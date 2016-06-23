// ScoreManagementSystemDlg.h : header file
//


#if !defined(AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_)
#define AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CScoreManagementSystemDlg dialog

class CScoreManagementSystemDlg : public CDialog
{
// Construction
public:
	void operationFile();
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
	afx_msg void OnButtonAlter();
	afx_msg void OnButtonShow();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_)
