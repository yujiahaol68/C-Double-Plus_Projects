#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;
	string b;
	cout<<"请输入任意字符串："<<endl;
	getline(cin,a);
	cout<<"请输入你想要提取的字符串："<<endl;
	getline(cin,b);
	while (!(a.find(b)))
	{
		b.clear();
		cout<<"提取失败！请检查您是否有输入此字符串！";
	}
	cout<<"提取成功！"<<endl;
	


	return 0;
}