#if !defined(AFX_ADDMESSAGEDLG_H__8D98B5FA_55B4_4959_BCDB_A648F8847908__INCLUDED_)
#define AFX_ADDMESSAGEDLG_H__8D98B5FA_55B4_4959_BCDB_A648F8847908__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddMessageDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAddMessageDlg dialog

class CAddMessageDlg : public CDialog
{
// Construction
public:
	CAddMessageDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddMessageDlg)
	enum { IDD = IDD_DIALOG_ADD };
	CString	m_strName;                        //����
	CString	m_strID;                         //ѧ��
	CString	m_strClass;                     //�༶
	CString	m_strGrade;                    //�꼶
	float	m_fChinese;                   //���ĳɼ�
	float	m_fch;                       //��ѧ�ɼ�
	float	m_fEnglish;                 //Ӣ��ɼ�
	float	m_fg;                      //����ɼ�
	float	m_fMath;                  //��ѧ�ɼ�
	float	m_fph;                   //����ɼ�
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddMessageDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddMessageDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDMESSAGEDLG_H__8D98B5FA_55B4_4959_BCDB_A648F8847908__INCLUDED_)
