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
		*(this->p) = *(a.p);           //仅仅是将a1.p的值拷贝到a2新new出来的p上，而这两个p此时地址不同
	}
	~A()
	{
		delete p;
	}
};

int main() {
	A a1;
	A a2{ a1 };         //调用了编译器生成默认拷贝构造函数，a1,a2的指针p指向的是同一个位置

	cout << "a1.p的值：" << reinterpret_cast<long long>(a1.p) << endl;
	cout << "*(a1.p)的值：" << *(a1.p) << endl;
	cout << "a2.p的值：" << reinterpret_cast<long long>(a2.p) << endl;
	cout << "*(a2.p)的值：" << *(a2.p) << endl;

	return 0;
}

