// LeftView.h : interface of the CLeftView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LEFTVIEW_H__4C3182CF_91F2_4FE7_8920_1C34F6E0D9D5__INCLUDED_)
#define AFX_LEFTVIEW_H__4C3182CF_91F2_4FE7_8920_1C34F6E0D9D5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/treectrl.h>

class CAnSeeDoc;

class CLeftView : public wxTreeCtrl
{
protected: // create from serialization only
	CLeftView();
	DECLARE_DYNAMIC_CLASS(CLeftView)

// Attributes
public:
	CAnSeeDoc* GetDocument();

// Operations
public:
	void SetSelectedItem();
	void ChangeTree();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLeftView)
	public:
	virtual void OnDraw(wxDC * pDC);  // overridden to draw this view
#if 0
	virtual bool PreCreateWindow(CREATESTRUCT& cs);
#endif
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLeftView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLeftView)
	void OnSelchanged(wxEvent & ev);
	void OnKeyDown(wxKeyEvent & ev);
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

#ifndef _DEBUG  // debug version in LeftView.cpp
inline CAnSeeDoc* CLeftView::GetDocument()
   { return (CAnSeeDoc*)0; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEFTVIEW_H__4C3182CF_91F2_4FE7_8920_1C34F6E0D9D5__INCLUDED_)
