#include<iostream>
#include<string>
#include"Circle.h"
#include"Rectangle.h"
#include"Shape.h"

int main() {
	Shape s1{ Color::blue,false };
	Circle c1{ 3.9,Color::yellow,true };
	Rectangle r1{ 4.4,2.2,Color::white,true };

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;   //基类同名函数会被隐藏
	std::cout << r1.toString() << std::endl;




	return 0;
}