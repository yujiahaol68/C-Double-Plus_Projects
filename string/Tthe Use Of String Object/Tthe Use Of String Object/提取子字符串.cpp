#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;
	string b;
	cout<<"�����������ַ�����"<<endl;
	getline(cin,a);
	cout<<"����������Ҫ��ȡ���ַ�����"<<endl;
	getline(cin,b);
	while (!(a.find(b)))
	{
		b.clear();
		cout<<"��ȡʧ�ܣ��������Ƿ���������ַ�����";
	}
	cout<<"��ȡ�ɹ���"<<endl;
	


	return 0;
}