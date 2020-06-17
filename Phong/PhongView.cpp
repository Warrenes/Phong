
// PhongView.cpp: CPhongView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Phong.h"
#endif

#include "PhongDoc.h"
#include "PhongView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPhongView

IMPLEMENT_DYNCREATE(CPhongView, CView)

BEGIN_MESSAGE_MAP(CPhongView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPhongView 构造/析构

CPhongView::CPhongView() noexcept
{
	// TODO: 在此处添加构造代码

}

CPhongView::~CPhongView()
{
}

BOOL CPhongView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CPhongView 绘图

void CPhongView::OnDraw(CDC* /*pDC*/)
{
	CPhongDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CPhongView 打印

BOOL CPhongView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CPhongView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CPhongView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CPhongView 诊断

#ifdef _DEBUG
void CPhongView::AssertValid() const
{
	CView::AssertValid();
}

void CPhongView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPhongDoc* CPhongView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPhongDoc)));
	return (CPhongDoc*)m_pDocument;
}
#endif //_DEBUG


// CPhongView 消息处理程序
