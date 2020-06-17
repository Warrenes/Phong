// Reflectivity.cpp: 实现文件
//

#include "pch.h"
#include "Phong.h"
#include "Reflectivity.h"
#include "afxdialogex.h"


// Reflectivity 对话框

IMPLEMENT_DYNAMIC(Reflectivity, CDialogEx)

Reflectivity::Reflectivity(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Reflectivity, pParent)
	, RefAroundG(0)
	, RefAroundB(0)
	, RefAroundR(0)
	, RefAroundC(FALSE)
	, RefRefR(0)
	, RefRefG(0)
	, RefRefB(0)
	, RefRefC(FALSE)
	, RefMirrorR(0)
	, RefMirrorG(0)
	, RefMirrorB(0)
	, RefMirrorC(FALSE)
	, HighLight(0)
{

}

Reflectivity::~Reflectivity()
{
}

void Reflectivity::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, RefAroundG);
	DDX_Text(pDX, IDC_EDIT2, RefAroundG);
	DDX_Text(pDX, IDC_EDIT3, RefAroundB);
	DDX_Text(pDX, IDC_EDIT1, RefAroundR);
	DDX_Check(pDX, IDC_CHECK1, RefAroundC);
	DDX_Text(pDX, IDC_EDIT4, RefRefR);
	DDX_Text(pDX, IDC_EDIT5, RefRefG);
	DDX_Text(pDX, IDC_EDIT6, RefRefB);
	DDX_Check(pDX, IDC_CHECK2, RefRefC);
	DDX_Text(pDX, IDC_EDIT7, RefMirrorR);
	DDX_Text(pDX, IDC_EDIT8, RefMirrorG);
	DDX_Text(pDX, IDC_EDIT9, RefMirrorB);
	DDX_Check(pDX, IDC_CHECK3, RefMirrorC);
	DDX_Text(pDX, IDC_EDIT10, HighLight);
}


BEGIN_MESSAGE_MAP(Reflectivity, CDialogEx)
	ON_BN_CLICKED(IDOK, &Reflectivity::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Reflectivity::OnBnClickedCancel)
END_MESSAGE_MAP()


// Reflectivity 消息处理程序



void Reflectivity::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void Reflectivity::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
