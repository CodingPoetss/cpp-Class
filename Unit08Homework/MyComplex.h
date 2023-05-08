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
	friend std::ostream& operator<<(std::ostream& stream, MyComplex& m);   //只能重载友元函数，不然只能是c1<<cout来输出
	MyComplex& operator=(const MyComplex& m);
};

