#include<iostream>
using std::cout;
using std::endl;
class A {
public:
	int* p;
	A() {
		p = new int(5);   
	}
	A(A& a) {
		p = new int(4);
		*(this->p) = *(a.p);           //�����ǽ�a1.p��ֵ������a2��new������p�ϣ���������p��ʱ��ַ��ͬ
	}
	~A()
	{
		delete p;
	}
};

int main() {
	A a1;
	A a2{ a1 };         //�����˱���������Ĭ�Ͽ������캯����a1,a2��ָ��pָ�����ͬһ��λ��

	cout << "a1.p��ֵ��" << reinterpret_cast<long long>(a1.p) << endl;
	cout << "*(a1.p)��ֵ��" << *(a1.p) << endl;
	cout << "a2.p��ֵ��" << reinterpret_cast<long long>(a2.p) << endl;
	cout << "*(a2.p)��ֵ��" << *(a2.p) << endl;

	return 0;
}

