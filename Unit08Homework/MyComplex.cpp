#include"MyComplex.h"

MyComplex::MyComplex(int a_, int b_) :a{ a_ }, b{b_} {}

MyComplex::~MyComplex() {}

string MyComplex::toString() {
	if (a == 0 && b == 0) { return "0"; }
	else if (a == 0 && b != 0) { return std::to_string(b) + 'i'; }
	else if (a != 0 && b == 0) { return std::to_string(a); }
	else if (a != 0 && b < 0) { return std::to_string(a) + std::to_string(b) + 'i'; }
	else { return std::to_string(a) + '+' + std::to_string(b) + 'i'; }
}

MyComplex MyComplex::operator+(MyComplex m) {  //���ص�����ֵ�����ܷ�����ֵ����������
	return MyComplex(a + m.a, b + m.b);
}

MyComplex MyComplex::operator*( MyComplex m) {
	int a_ = a * (m.a) - b * (m.b);
	int b_ = a * (m.b) + b * (m.a);
	return MyComplex(a_,b_);
}
 MyComplex MyComplex::operator*(const int& m) {
	 return MyComplex(a * m, b * m);
}
 MyComplex operator*(const int& sup,  MyComplex m) {
	 return m * sup;
}

MyComplex& MyComplex::operator+=(const MyComplex& m) {   //���ص�����ֵ
	a += m.a;
	b += m.b;
	return (*this);
}
int& MyComplex::operator[](const int& index) {   //ʹ���������ͣ��ֿɶ��ֿ�д
	if (index == 0) {return a;}
	if (index == 1) { return b; }
	else {
		throw std::out_of_range("at() only accept 1 or 2 as parameter");
	}
}

MyComplex& MyComplex::operator++() {
	++(this->a);
	++(this->b);
	return *this;
}

MyComplex MyComplex::operator++(int dummy) {
	MyComplex temp(a, b);
	a++; b++;
	return temp;
}

std::ostream& operator<<(std::ostream& os, MyComplex& m) {    //cout<<m
	 os << '(' << m.a << ',' << m.b << "i)";
	 return os;
}

 MyComplex& MyComplex::operator=(const MyComplex& m) {
	 this->a = m.a;
	 this->b = m.b;
	 return *this;
 }