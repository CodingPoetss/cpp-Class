#include<iostream>
using std::cout;
using std::endl;

class A {
public:
	//A() { cout << "A()" << endl; }
	A() = default;
	A(int i) { cout << "A(" << i << ")" << endl; }
};


class B :public A {                       //派生类初始化列表中总是默认存在基类的默认构造函数
public:
	B() { cout << "B()" << endl; }
	B(int j) { cout << "B(" << j << ")" << endl; }
};

int main() {
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };
	return 0;
}