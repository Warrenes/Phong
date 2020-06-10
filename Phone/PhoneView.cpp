
// PhoneView.cpp: CPhoneView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Phone.h"
#endif

#include "PhoneDoc.h"
#include "PhoneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPhoneView

IMPLEMENT_DYNCREATE(CPhoneView, CView)

BEGIN_MESSAGE_MAP(CPhoneView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPhoneView 构造/析构

CPhoneView::CPhoneView() noexcept
{
	// TODO: 在此处添加构造代码

}

CPhoneView::~CPhoneView()
{
}

BOOL CPhoneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CPhoneView 绘图

void CPhoneView::OnDraw(CDC* /*pDC*/)
{
	CPhoneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CPhoneView 打印

BOOL CPhoneView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CPhoneView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CPhoneView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CPhoneView 诊断

#ifdef _DEBUG
void CPhoneView::AssertValid() const
{
	CView::AssertValid();
}

void CPhoneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPhoneDoc* CPhoneView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPhoneDoc)));
	return (CPhoneDoc*)m_pDocument;
}
#endif //_DEBUG


// CPhoneView 消息处理程序
