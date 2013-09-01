// AnSeeDoc.h : interface of the CAnSeeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ANSEEDOC_H__70F9578F_D760_40C5_89DE_C1CD73397A0A__INCLUDED_)
#define AFX_ANSEEDOC_H__70F9578F_D760_40C5_89DE_C1CD73397A0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/docview.h>

#include "Sprite.h"
#include "LeftView.h"
#include "AnSeeView.h"

typedef struct FileSearch {
wxString cPathName;
wxString cFileTitle;
} FileSearch;

#define DEF_MAXSPRITES 100

class CAnSeeDoc : public wxDocument
{
protected: // create from serialization only
	CAnSeeDoc();
	DECLARE_DYNAMIC_CLASS(CAnSeeDoc)

// Attributes
public:
	bool m_bNeedToOpen;
	CSprite *m_pSpr[DEF_MAXSPRITES];
	int m_iTotalimage;
	wxString m_cPathName;
	wxString m_cFolderName;
	wxString m_cFileTitle;
	wxString m_cFileSize;
	FileSearch m_filelist[400];
	int m_CurFileIndex;
	int m_MaxFile;
	int m_view;
	int m_frameview;
	int m_zoom;
	CLeftView *m_pLeftView;
	CAnSeeView *m_pRightView;
	wxDC *m_pDC;

// Operations
public:
	void OnOpenFile();
	void OnKeyDown( wxKeyEvent & nChar );
	void OnKeyUp( wxKeyEvent & nChar );
	void SetLeftView( CLeftView* pView );
	void SetRightView( CAnSeeView *pView, wxDC *pDC );

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnSeeDoc)
	public:
	virtual bool OnNewDocument();
#if 0
	virtual void Serialize(CArchive& ar);
#endif
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAnSeeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAnSeeDoc)
	void OnEditCopy();
	void OnEditCut();
	void OnEditPaste();
	void OnFileOpen();
	void OnUpdateMenu(wxUpdateUIEvent & pCmdUI);
	void OnFileSave();
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANSEEDOC_H__70F9578F_D760_40C5_89DE_C1CD73397A0A__INCLUDED_)
