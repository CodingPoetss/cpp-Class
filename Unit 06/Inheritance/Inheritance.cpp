#include<iostream>
#include<string>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
using std::cout;
using std::endl;
int main() {

	Shape s1{ Color::blue,false };
	Circle c1{ 3.4,Color::green,true };
	Rectangle r1{ 4.0,1.0,Color::green,false };

	cout << s1.toString() << endl;
	cout << c1.toString() << endl;
	cout << r1.toString() << endl;

	cout << c1.getArea() << endl;
	cout << r1.getArea() << endl;

	return 0;
}