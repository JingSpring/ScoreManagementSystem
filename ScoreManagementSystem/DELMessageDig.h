#if !defined(AFX_DELMESSAGEDIG_H__D757DAD4_B7F0_42C3_ADC5_763BBCB1DF5E__INCLUDED_)
#define AFX_DELMESSAGEDIG_H__D757DAD4_B7F0_42C3_ADC5_763BBCB1DF5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DELMessageDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDELMessageDig dialog

class CDELMessageDig : public CDialog
{
// Construction
public:
	CDELMessageDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDELMessageDig)
	enum { IDD = IDD_DIALOG_DEL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDELMessageDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDELMessageDig)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELMESSAGEDIG_H__D757DAD4_B7F0_42C3_ADC5_763BBCB1DF5E__INCLUDED_)
