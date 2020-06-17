#pragma once


// Reflectivity 对话框

class Reflectivity : public CDialogEx
{
	DECLARE_DYNAMIC(Reflectivity)

public:
	Reflectivity(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Reflectivity();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Reflectivity };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double RefAroundG;
	double RefAroundB;
	double RefAroundR;
	BOOL RefAroundC;
	double RefRefR;
	double RefRefG;
	double RefRefB;
	BOOL RefRefC;
	double RefMirrorR;
	double RefMirrorG;
	double RefMirrorB;
	BOOL RefMirrorC;
	int HighLight;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
