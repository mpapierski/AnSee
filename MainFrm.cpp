// MainFrm.cpp : implementation of the CMainFrame class
//

#include "StdAfx.h"
#include "AnSee.h"

#include "MainFrm.h"
#include "LeftView.h"
#include "AnSeeView.h"

#include "AnSeeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC_CLASS(CMainFrame, wxMDIParentFrame)

BEGIN_EVENT_TABLE(CMainFrame, wxMDIParentFrame)
	//{{AFX_MSG_MAP(CMainFrame)
	//ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_EVENT_TABLE()

/*static int indicators[] =
{
	ID_SEPARATOR,
	ID_SEPARATOR,
	ID_SEPARATOR,
	ID_SEPARATOR,
	ID_SEPARATOR,
	ID_SEPARATOR,
};*/

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
}

CMainFrame::~CMainFrame()
{
}

bool CMainFrame::OnCreate(wxDocument * doc, long flags)
{
	return true;
#if 0

	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
/*	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}*/

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}
	m_wndStatusBar.SetPaneInfo( 0, ID_SEPARATOR, SBPS_NORMAL, 200 );
	m_wndStatusBar.SetPaneInfo( 1, ID_SEPARATOR, SBPS_NORMAL, 150 );
	m_wndStatusBar.SetPaneInfo( 2, ID_SEPARATOR, SBPS_NORMAL, 70 );
	m_wndStatusBar.SetPaneInfo( 3, ID_SEPARATOR, SBPS_NORMAL, 110 );
	m_wndStatusBar.SetPaneInfo( 4, ID_SEPARATOR, SBPS_NORMAL, 70 );
	m_wndStatusBar.SetPaneInfo( 5, ID_SEPARATOR, SBPS_STRETCH, 150 );

	SetActiveView( GetRightPane() );

	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
#endif
}

wxMDIClientWindow * CMainFrame::OnCreateClient()
{
#if 0
	// create splitter window
	if (!m_wndSplitter.CreateStatic(this, 1, 2))
		return FALSE;

	if (!m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CLeftView), CSize(200, 650), pContext) ||
		!m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CAnSeeView), CSize(200, 650), pContext))
	{
		m_wndSplitter.DestroyWindow();
		return FALSE;
	}
	return TRUE;
#endif
	return 0;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

CAnSeeView* CMainFrame::GetRightPane()
{
#if 0
	CWnd* pWnd = m_wndSplitter.GetPane(0, 1);
	CAnSeeView* pView = DYNAMIC_DOWNCAST(CAnSeeView, pWnd);
	return pView;
#endif
	return 0;
}
