#include <afxwin.h>
#include "hellomfc.h"

CMyApp myApp;

BOOL CMyApp::InitInstance()
{
   m_pMainWnd = new CMyFrame;
   m_pMainWnd ->ShowWindows(m_nCmdshow);
   m_pMainWnd ->UpdateWindow();

   return TRUE;
}

BEGIN_MESSAGE_MAP(CMyFrame,CFrameWnd)
    ON_WM_PAINT()
END_MESSAGE_MAP()                       //����һ�����

CMyFrame::CMyFrame()
{

	Create(NULL,TEXT("�����ҵ�MFC���Դ���!"));
}

void CMyFrame::OnPaint()
{
  CPaintDC dc(this);  //����CMyFrame���Լ�,this��һ������ָ��
  CRect     rect;

  GetClientRect(&rect);
  dc.DrawText(TEXT("Hello MFC!"),-1,&rect,DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}