
// VS2013MFC_CDialogExTest.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CVS2013MFC_CDialogExTestApp:
// See VS2013MFC_CDialogExTest.cpp for the implementation of this class
//

class CVS2013MFC_CDialogExTestApp : public CWinApp
{
public:
	CVS2013MFC_CDialogExTestApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CVS2013MFC_CDialogExTestApp theApp;