#include<iostream>
#include"Square.h"

int Square::numberOfObjects;
int main() {
	Square s1;
	std::cout << s1.getNumberOfObject() << std::endl;
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfObject() << std::endl;
	std::cout << s2.getNumberOfObjectNonStatic() << std::endl;
	//std::cout << Square::getNumberOfObjectNonStatic() << std::endl;
	/*对于静态成员有两种调用输出的方式，一是通过对象名加点直接调用getter函数，
	此时无论getter函数是否是static类型都无影响；二是通过类名称加::来调用getter函数，
	此时必须使用static函数来调用静态成员，而不能使用非普通类型函数*/





	return 0;
}