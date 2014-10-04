#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QTextCodec> //���ͷ�ļ�
#include "logindlg.h" //���ͷ�ļ�

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // QTextCodec::setCodecForTr(QTextCodec::codecForLocale()); //���ñ���
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
    MainWindow w;

    LoginDlg dlg;                        // �����Լ��½�����Ķ���dlg
    if(dlg.exec() == QDialog::Accepted)  // ����Accepted����ֵ�жϰ�ť�Ƿ񱻰���
    {
        w.show();                       // ��������£���ʾ������
        return a.exec();               // ����һֱִ�У�ֱ�������ڹر�
    }
    else return 0;                    //���û�����£��򲻻���������ڣ����������������

}

