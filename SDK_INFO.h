#pragma once


// SDK_INFO dialog

class SDK_INFO : public CDialog
{
	DECLARE_DYNAMIC(SDK_INFO)
	CString	m_strResult_info;


	public:
		SDK_INFO(CWnd* pParent = NULL);   // standard constructor
		virtual ~SDK_INFO();

	// Dialog Data
		enum { IDD = IDD_SDK_INFO };

	protected:
		virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

		DECLARE_MESSAGE_MAP()
	public:
		afx_msg void OnBnClickedOk();
};
