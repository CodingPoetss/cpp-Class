#include<iostream>
using std::cout;
using std::endl;

class B {                  //����
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
};

class E {
public:
	E() { cout << "E()" << endl; }
};


class D :public B {
public:
	using B::B;
	D() = default;
	D(double x) :e1{}, e2{},B(static_cast<int>(x)) {          //�ȵ��û���Ĺ��캯�����ٽ��б���ĳ�ʼ��
		cout << "D(" << x << ")" << endl; }
private:
	E e1, e2;
};





int main() {

	B b;
	D d;
	D d2{ 3.04 };

	return 0;
}


