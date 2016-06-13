// DELMessageDig.cpp : implementation file
//

#include "stdafx.h"
#include "ScoreManagementSystem.h"
#include "DELMessageDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDELMessageDig dialog


CDELMessageDig::CDELMessageDig(CWnd* pParent /*=NULL*/)
	: CDialog(CDELMessageDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDELMessageDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDELMessageDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDELMessageDig)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDELMessageDig, CDialog)
	//{{AFX_MSG_MAP(CDELMessageDig)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDELMessageDig message handlers
