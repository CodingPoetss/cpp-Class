#include<iostream>
#include<typeinfo>
using std::cout;
using std::endl;
using std::cin;

auto max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	//auto���������ڶ���ʱ��ʼ��
	auto x{ 3 };

	//������һ��auto���еı�������ʼ���Ƶ�Ϊͬһ����
	auto a1{ 2 }, a2{ 3 };

	//�����ʼ�����ʽ�����û�const����ȥ�����û���const����(��auto�ؼ��ּ���&����ȥ�����û�const����)
	int y1{ 42 }, & y2{ y1 };
	auto& y3{ y2 };    

	//��ʼ��Ϊ����ʱ��auto�ؼ����Ƶ�Ϊָ��(����&���Ƶ�Ϊ����)
	int p1[3]{ 1,2,3 };
	auto p2{ p1 };
	auto& p3{ p1 };
	cout << typeid(p2).name() << endl;
	cout << typeid(p3).name() << endl;

	//C++14�п�����Ϊ�����ķ���ֵ�Ͳ�������
	cout<<max(3, 4)<<endl;
	
}

