
// MFC_SDI_minimal.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "MFC_SDI_minimal.h"
#include "MainFrm.h"

#include "MFC_SDI_minimalDoc.h"
#include "MFC_SDI_minimalView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSDIminimalApp

BEGIN_MESSAGE_MAP(CMFCSDIminimalApp, CWinAppEx)
	// Standard file based document commands
	//ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	//ON_COMMAND(ID_FILE_OPEN, &CWinAppEx::OnFileOpen)
END_MESSAGE_MAP()


// CMFCSDIminimalApp construction

CMFCSDIminimalApp::CMFCSDIminimalApp() noexcept
{
	m_bHiColorIcons = TRUE;
}

// The one and only CMFCSDIminimalApp object

CMFCSDIminimalApp theApp;


// CMFCSDIminimalApp initialization

BOOL CMFCSDIminimalApp::InitInstance()
{
	CWinAppEx::InitInstance();


	EnableTaskbarInteraction(FALSE);

	SetRegistryKey(_T("Local AppWizard-Generated Applications"));
	LoadStdProfileSettings(0);  // Load standard INI file options (including MRU)

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CMFCSDIminimalDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMFCSDIminimalView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);


	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	//ParseCommandLine(cmdInfo);

	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;

	// The one and only window has been initialized, so show and update it
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

// CMFCSDIminimalApp message handlers
