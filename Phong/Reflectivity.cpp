// Reflectivity.cpp: 实现文件
//

#include "pch.h"
#include "Phong.h"
#include "Reflectivity.h"
#include "afxdialogex.h"
#include "stdafx.h"


// Reflectivity 对话框

IMPLEMENT_DYNAMIC(Reflectivity, CDialogEx)

Reflectivity::Reflectivity(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Reflectivity, pParent)
	, m_AroundR(0.175)
	, m_AroundG(0.012)
	, m_AroundB(0.012)
	, m_AroundC(TRUE)
	, m_RefR(0.614)
	, m_RefG(0.041)
	, m_RefB(0.041)
	, m_RefC(TRUE)
	, m_MirrorR(0.728)
	, m_MirrorG(0.527)
	, m_MirrorB(0.527)
	, m_MirrorC(TRUE)
	, HighLight(30)
{

}

Reflectivity::~Reflectivity()
{
}

void Reflectivity::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_AroundR);
	DDV_MinMaxDouble(pDX, m_AroundR, 0, 1);
	DDX_Text(pDX, IDC_EDIT2, m_AroundG);
	DDV_MinMaxDouble(pDX, m_AroundG, 0, 1);
	DDX_Text(pDX, IDC_EDIT3, m_AroundB);
	DDV_MinMaxDouble(pDX, m_AroundB, 0, 1);
	DDX_Check(pDX, IDC_CHECK1, m_AroundC);
	DDX_Text(pDX, IDC_EDIT4, m_RefR);
	DDV_MinMaxDouble(pDX, m_RefR, 0, 1);
	DDX_Text(pDX, IDC_EDIT5, m_RefG);
	DDV_MinMaxDouble(pDX, m_RefG, 0, 1);
	DDX_Text(pDX, IDC_EDIT6, m_RefB);
	DDV_MinMaxDouble(pDX, m_RefB, 0, 1);
	DDX_Check(pDX, IDC_CHECK2, m_RefC);
	DDX_Text(pDX, IDC_EDIT7, m_MirrorR);
	DDV_MinMaxDouble(pDX, m_MirrorR, 0, 1);
	DDX_Text(pDX, IDC_EDIT8, m_MirrorG);
	DDV_MinMaxDouble(pDX, m_MirrorG, 0, 1);
	DDX_Text(pDX, IDC_EDIT9, m_MirrorB);
	DDV_MinMaxDouble(pDX, m_MirrorB, 0, 1);
	DDX_Check(pDX, IDC_CHECK3, m_MirrorC);
	DDX_Text(pDX, IDC_EDIT10, HighLight);
	DDV_MinMaxInt(pDX, HighLight, 0, 100);
}


BEGIN_MESSAGE_MAP(Reflectivity, CDialogEx)
	ON_BN_CLICKED(IDOK, &Reflectivity::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Reflectivity::OnBnClickedCancel)
END_MESSAGE_MAP()


// Reflectivity 消息处理程序


void Reflectivity::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	reflectivity.UpdateData(TRUE);
	CDialogEx::OnOK();
}


void Reflectivity::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
