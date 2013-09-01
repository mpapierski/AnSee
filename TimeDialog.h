#if !defined(AFX_TIMEDIALOG_H__3F67DC91_5F2B_4895_93CE_761E07E438C7__INCLUDED_)
#define AFX_TIMEDIALOG_H__3F67DC91_5F2B_4895_93CE_761E07E438C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TimeDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTimeDialog dialog

class CTimeDialog : public wxDialog
{
// Construction
public:
	CTimeDialog(wxWindow * pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTimeDialog)
	enum { IDD = IDD_DLG_TIMER };
	unsigned int	m_iDelayTime;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTimeDialog)
	protected:
#if 0
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
#endif
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTimeDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIMEDIALOG_H__3F67DC91_5F2B_4895_93CE_761E07E438C7__INCLUDED_)
