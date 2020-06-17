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
	double m_AroundR;
	double m_AroundG;
	double m_AroundB;
	BOOL m_AroundC;
	double m_RefR;
	double m_RefG;
	double m_RefB;
	BOOL m_RefC;
	double m_MirrorR;
	double m_MirrorG;
	double m_MirrorB;
	BOOL m_MirrorC;
	int HighLight;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
