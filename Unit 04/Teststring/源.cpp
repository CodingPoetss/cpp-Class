#include<iostream>
#include<string>
using namespace std;

int main() {
	//�����ַ���
	string s{ "Hello!" };

	//clear
	s.clear();

	//������Ϊ�ַ�����ֵ
	char arr[]{ 'W','o','r','l','d','\0' };           //ʹ���ַ�������ַ������г�ʼ��ʱ������Ҫ����\0��ʾ�ַ�����Ľ���
	s += arr;

	//assign()
	s.assign("1024");

	//append
	s.append("  ");
	s.append(5, '\t');
	s.append(1,'!');     //����s.append("!");
	cout << s << endl;

	//insert �հ�
	s.insert(0, "    ");        //ǰ��һ������Ϊ�����index

	//�Ƴ��ַ�ǰ��Ŀհ�
	s.erase(0,s.find_first_not_of(" \t\n\r"));
	//�Ƴ��ַ�����Ŀհ�
	s.erase(s.find_last_not_of(" \t\n\r")+1);

	//���ִ�ת��Ϊ�����򸡵���
	int x = std::stoi(s);


	cout << s << endl;
	cout << "x=" << x << endl;

	string s2 = std::to_string(x);
	cout << "s2:" << s2;
	return 0;
}