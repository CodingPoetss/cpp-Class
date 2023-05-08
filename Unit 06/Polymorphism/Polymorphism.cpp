#include<iostream>
#include<string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() { return "A"; }     //�������Զ���Ϊ�麯��
};

class B :public A{
public:
	std::string toString() override{ return "B"; }     //�����ຯ����д�����麯���޷�Ѱ�Ҳ�������ã��ɼ���override��Debug
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