
// MFC_SDI_minimalView.cpp : implementation of the CMFCSDIminimalView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFC_SDI_minimal.h"
#endif

#include "MFC_SDI_minimalDoc.h"
#include "MFC_SDI_minimalView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSDIminimalView

IMPLEMENT_DYNCREATE(CMFCSDIminimalView, CView)

BEGIN_MESSAGE_MAP(CMFCSDIminimalView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCSDIminimalView construction/destruction

CMFCSDIminimalView::CMFCSDIminimalView() noexcept
{
	// TODO: add construction code here

}

CMFCSDIminimalView::~CMFCSDIminimalView()
{
}

BOOL CMFCSDIminimalView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCSDIminimalView drawing

void CMFCSDIminimalView::OnDraw(CDC* /*pDC*/)
{
	CMFCSDIminimalDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CMFCSDIminimalView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCSDIminimalView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}

// CMFCSDIminimalView diagnostics

#ifdef _DEBUG
void CMFCSDIminimalView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCSDIminimalView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCSDIminimalDoc* CMFCSDIminimalView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCSDIminimalDoc)));
	return (CMFCSDIminimalDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCSDIminimalView message handlers
