#if !defined(AFX_SELECTMESSAGEDLG_H__F6CA8516_F06E_48F2_B177_E31DFD709C30__INCLUDED_)
#define AFX_SELECTMESSAGEDLG_H__F6CA8516_F06E_48F2_B177_E31DFD709C30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SELECTMessageDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSELECTMessageDlg dialog

class CSELECTMessageDlg : public CDialog
{
// Construction
public:
	CSELECTMessageDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSELECTMessageDlg)
	enum { IDD = IDD_DIALOG_SELECT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSELECTMessageDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSELECTMessageDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SELECTMESSAGEDLG_H__F6CA8516_F06E_48F2_B177_E31DFD709C30__INCLUDED_)
