class CMyApp : public CWinapp  //应用程序类
{
   virtual BOOL InitInstance();  

};

class CMyFrame : public CFrameWnd   //窗口框架类
{
public:
    CMyFrame();

protected:
	 afx_msg void OnPaint();      //用于消息处理的函数
     
	 DECLARE_MESSAGE_MAP()        //关联上面的函数，让上面的函数处理消息

};