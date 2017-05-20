
// VS2013MFC_CDialogExTestDlg.h : header file
//

#pragma once


// CVS2013MFC_CDialogExTestDlg dialog
class CVS2013MFC_CDialogExTestDlg : public CDialogEx
{
// Construction
public:
	CVS2013MFC_CDialogExTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_VS2013MFC_CDIALOGEXTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
