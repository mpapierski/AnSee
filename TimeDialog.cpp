// TimeDialog.cpp : implementation file
//

#include "StdAfx.h"
#include "AnSee.h"
#include "TimeDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTimeDialog dialog


CTimeDialog::CTimeDialog(wxWindow* pParent /*=NULL*/)
	// : CDialog(CTimeDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTimeDialog)
	m_iDelayTime = 0;
	//}}AFX_DATA_INIT
}


#if 0
void CTimeDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTimeDialog)
	DDX_Text(pDX, IDC_TIMEDELAY, m_iDelayTime);
	DDV_MinMaxUInt(pDX, m_iDelayTime, 10, 5000);
	//}}AFX_DATA_MAP
}
#endif


BEGIN_EVENT_TABLE(CTimeDialog, wxDialog)
	//{{AFX_MSG_MAP(CTimeDialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_EVENT_TABLE()

/////////////////////////////////////////////////////////////////////////////
// CTimeDialog message handlers
