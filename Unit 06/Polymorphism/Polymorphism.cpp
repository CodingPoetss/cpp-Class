#include<iostream>
#include<string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() { return "A"; }     //派生类自动变为虚函数
};

class B :public A{
public:
	std::string toString() override{ return "B"; }     //派生类函数若写错则虚函数无法寻找并对其调用，可加上override来Debug
};

class C: public B {
public:
	std::string toString() override { return "C"; } 
};

void print(A* o) {
	cout << o->toString() << endl;
}

void print(A& o) {
	cout << o.toString() << endl;
}

int main() {

	A a; B b; C c;
	print(&a);
	print(&b);
	print(&c);

	print(a);
	print(b);
	print(c);
	return 0;
}