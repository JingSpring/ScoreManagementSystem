#if !defined(AFX_ALTERDLG_H__B1C73195_1E34_4680_98E2_853DEA434F80__INCLUDED_)
#define AFX_ALTERDLG_H__B1C73195_1E34_4680_98E2_853DEA434F80__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ALTERDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CALTERDlg dialog

class CALTERDlg : public CDialog
{
// Construction
public:
	CALTERDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CALTERDlg)
	enum { IDD = IDD_DIALOG_ALTER };
	CString	m_ID;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CALTERDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CALTERDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALTERDLG_H__B1C73195_1E34_4680_98E2_853DEA434F80__INCLUDED_)
