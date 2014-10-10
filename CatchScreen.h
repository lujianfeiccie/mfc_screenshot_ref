// CatchScreen.h : main header file for the CATCHSCREEN application
//

#if !defined(AFX_CATCHSCREEN_H__BA73F2FA_8433_4D5A_964C_4925A87680B6__INCLUDED_)
#define AFX_CATCHSCREEN_H__BA73F2FA_8433_4D5A_964C_4925A87680B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCatchScreenApp:
// See CatchScreen.cpp for the implementation of this class
//

class CCatchScreenApp : public CWinApp
{
public:
	HWND m_hwndDlg;
public:
	CCatchScreenApp();
public:
	virtual BOOL InitInstance();
	virtual BOOL ProcessMessageFilter(int code,LPMSG lpMsg);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCatchScreenApp)
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCatchScreenApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CATCHSCREEN_H__BA73F2FA_8433_4D5A_964C_4925A87680B6__INCLUDED_)
