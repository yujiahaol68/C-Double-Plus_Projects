class CMyApp : public CWinapp  //Ӧ�ó�����
{
   virtual BOOL InitInstance();  

};

class CMyFrame : public CFrameWnd   //���ڿ����
{
public:
    CMyFrame();

protected:
	 afx_msg void OnPaint();      //������Ϣ����ĺ���
     
	 DECLARE_MESSAGE_MAP()        //��������ĺ�����������ĺ���������Ϣ

};