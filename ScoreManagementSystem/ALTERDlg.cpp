// ALTERDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ScoreManagementSystem.h"
#include "ALTERDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CALTERDlg dialog


CALTERDlg::CALTERDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CALTERDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CALTERDlg)
	m_ID = _T("");
	//}}AFX_DATA_INIT
}


void CALTERDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CALTERDlg)
	DDX_Text(pDX, IDC_EDIT_ALTER, m_ID);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CALTERDlg, CDialog)
	//{{AFX_MSG_MAP(CALTERDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CALTERDlg message handlers

void CALTERDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
