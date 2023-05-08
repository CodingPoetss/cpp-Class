#pragma once
#include<iostream>
#include<string>
#include<stdexcept>
#include<ostream>
using std::string;

class MyComplex
{
private:
	int a{ 0 };
	int b{ 0 };
public:
	MyComplex(int a_,int b_);
	~MyComplex();
	string toString();
	MyComplex operator+(MyComplex m);

	MyComplex operator*(MyComplex m);
	MyComplex operator*(const int& m);
	friend MyComplex operator*(const int& sup, MyComplex m);

	MyComplex& operator+=(const MyComplex& m);
	int& operator[](const int& index);
	MyComplex& operator++();
	MyComplex operator++(int dummy);
	friend std::ostream& operator<<(std::ostream& stream, MyComplex& m);   //ֻ��������Ԫ��������Ȼֻ����c1<<cout�����
	MyComplex& operator=(const MyComplex& m);
};

