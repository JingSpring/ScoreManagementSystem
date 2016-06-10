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
	CScoreManagementSystemDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CScoreManagementSystemDlg)
	enum { IDD = IDD_SCOREMANAGEMENTSYSTEM_DIALOG };
		// NOTE: the ClassWizard will add data members here
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
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCOREMANAGEMENTSYSTEMDLG_H__1BCCC462_E7CF_4560_AB96_92E8E0C94DAC__INCLUDED_)
