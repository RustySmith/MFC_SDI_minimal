
// MFC_SDI_minimal.h : main header file for the MFC_SDI_minimal application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCSDIminimalApp:
// See MFC_SDI_minimal.cpp for the implementation of this class
//

class CMFCSDIminimalApp : public CWinAppEx
{
public:
	CMFCSDIminimalApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	//UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	//afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCSDIminimalApp theApp;
