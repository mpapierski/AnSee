// AnSeeView.h : interface of the CAnSeeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ANSEEVIEW_H__87DB7C49_4DE0_4A3F_9AD8_47ABD0C0535A__INCLUDED_)
#define AFX_ANSEEVIEW_H__87DB7C49_4DE0_4A3F_9AD8_47ABD0C0535A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAnSeeView : public wxView
{
protected: // create from serialization only
	CAnSeeView();
	DECLARE_DYNAMIC_CLASS(CAnSeeView)

// Attributes
public:
	wxDC * BufferDC;
	CAnSeeDoc* GetDocument();
	wxString status0, status1, status2, status3, status4, status5;
	wxPoint m_originpoint;
	wxPoint m_movepoint;
	wxPoint m_movingpoint;
	unsigned int m_nTimer;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnSeeView)
	public:
	virtual void OnDraw(wxDC * pDC);  // overridden to draw this view
	protected:
	virtual bool OnInit(wxEvent &); // called first time after construct
#if 0
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
#endif
	//}}AFX_VIRTUAL

// Implementation
public:
	void RefreshView();
	virtual ~CAnSeeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAnSeeView)
	void OnRButtonDown(wxEvent & ev);
	void OnKeyDown(wxKeyEvent & ev);
	void OnKeyUp(wxKeyEvent & ev);
	void OnLButtonDown(wxEvent & ev);
	void OnMouseMove(wxEvent & ev);
	void OnLButtonUp(wxEvent & ev);
	// BOOL OnEraseBkgnd(wxDC & pDC);
	// void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

#ifndef _DEBUG  // debug version in AnSeeView.cpp
inline CAnSeeDoc* CAnSeeView::GetDocument()
   { return (CAnSeeDoc*)0; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANSEEVIEW_H__87DB7C49_4DE0_4A3F_9AD8_47ABD0C0535A__INCLUDED_)
