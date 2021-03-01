
// MFC_SDI_minimalView.h : interface of the CMFCSDIminimalView class
//

#pragma once


class CMFCSDIminimalView : public CView
{
protected: // create from serialization only
	CMFCSDIminimalView() noexcept;
	DECLARE_DYNCREATE(CMFCSDIminimalView)

// Attributes
public:
	CMFCSDIminimalDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMFCSDIminimalView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFC_SDI_minimalView.cpp
inline CMFCSDIminimalDoc* CMFCSDIminimalView::GetDocument() const
   { return reinterpret_cast<CMFCSDIminimalDoc*>(m_pDocument); }
#endif

