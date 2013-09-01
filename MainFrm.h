// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__4867B0D3_036D_4724_AA1A_49AAAF9CFBCE__INCLUDED_)
#define AFX_MAINFRM_H__4867B0D3_036D_4724_AA1A_49AAAF9CFBCE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/docview.h>
#include <wx/splitter.h>

class CAnSeeView;

class CMainFrame : public wxMDIParentFrame
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNAMIC_CLASS(CMainFrame)

// Attributes
protected:
	wxSplitterWindow * m_wndSplitter;
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	wxMDIClientWindow * OnCreateClient();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
	wxStatusBar * m_wndStatusBar;
	CAnSeeView* GetRightPane();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	wxToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	virtual bool OnCreate(wxDocument * doc, long flags);
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__4867B0D3_036D_4724_AA1A_49AAAF9CFBCE__INCLUDED_)
