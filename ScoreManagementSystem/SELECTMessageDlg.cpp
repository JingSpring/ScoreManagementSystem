// SELECTMessageDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ScoreManagementSystem.h"
#include "SELECTMessageDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSELECTMessageDlg dialog


CSELECTMessageDlg::CSELECTMessageDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSELECTMessageDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSELECTMessageDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSELECTMessageDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSELECTMessageDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSELECTMessageDlg, CDialog)
	//{{AFX_MSG_MAP(CSELECTMessageDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSELECTMessageDlg message handlers
