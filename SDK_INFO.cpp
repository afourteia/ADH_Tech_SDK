// SDK_INFO.cpp : implementation file
//

#include "stdafx.h"
#include "SDK_DEMO.h"
#include "SDK_INFO.h"


// SDK_INFO dialog

IMPLEMENT_DYNAMIC(SDK_INFO, CDialog)

SDK_INFO::SDK_INFO(CWnd* pParent /*=NULL*/)
	: CDialog(SDK_INFO::IDD, pParent)
{

}

SDK_INFO::~SDK_INFO()
{
}

void SDK_INFO::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);



	DDX_Text(pDX, IDC_STATIC_RESULT_INFO, m_strResult_info);
}


BEGIN_MESSAGE_MAP(SDK_INFO, CDialog)
	ON_BN_CLICKED(IDOK, &SDK_INFO::OnBnClickedOk)
END_MESSAGE_MAP()


// SDK_INFO message handlers

void SDK_INFO::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	OnOK();
}
