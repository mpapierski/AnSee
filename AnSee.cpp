// AnSee.cpp : Defines the class behaviors for the application.
//

#include "StdAfx.h"
#include "AnSee.h"

#include "MainFrm.h"
#include "AnSeeDoc.h"
#include "LeftView.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAnSeeApp

BEGIN_EVENT_TABLE(CAnSeeApp, wxApp)
	//{{AFX_MSG_MAP(CAnSeeApp)
	//ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	//}}AFX_MSG_MAP
	// Standard file based document commands
	//ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	//ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
	// Standard print setup command
	//ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
END_EVENT_TABLE()

/////////////////////////////////////////////////////////////////////////////
// CAnSeeApp construction

CAnSeeApp::CAnSeeApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CAnSeeApp object

CAnSeeApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CAnSeeApp initialization

bool CAnSeeApp::OnInit(wxEvent &)
{
#if 0
	// Change the registry key under which our settings are stored.
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	LoadStdProfileSettings();  // Load standard INI file options (including MRU)

	// Register document templates

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CAnSeeDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CLeftView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);
	if( cmdInfo.m_strFileName != "" ) m_strCommand = cmdInfo.m_strFileName;

	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	m_pMainWnd->ShowWindow(SW_SHOWMAXIMIZED);
	m_pMainWnd->UpdateWindow();
#endif
	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public wxDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
#if 0
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
#endif
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
		// No message handlers
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

CAboutDlg::CAboutDlg() // : wxDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

#if 0
void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}
#endif
BEGIN_EVENT_TABLE(CAboutDlg, wxDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_EVENT_TABLE()

// App command to run the dialog
void CAnSeeApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	//aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// CAnSeeApp message handlers

IMPLEMENT_APP(CAnSeeApp)
