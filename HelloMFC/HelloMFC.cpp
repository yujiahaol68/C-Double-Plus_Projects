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
END_MESSAGE_MAP()                       //宏是一组操作

CMyFrame::CMyFrame()
{

	Create(NULL,TEXT("这是我的MFC测试窗口!"));
}

void CMyFrame::OnPaint()
{
  CPaintDC dc(this);  //代表CMyFrame它自己,this是一个常量指针
  CRect     rect;

  GetClientRect(&rect);
  dc.DrawText(TEXT("Hello MFC!"),-1,&rect,DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}