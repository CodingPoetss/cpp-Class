#include<iostream>
#include"Shape.h"
#include"Rectangle.h"
#include"Circle.h"
using namespace std;

int main() {

	//Shape s{ Color::green,false };
	Circle c{ 2.2,Color::red,true };
	cout<<c.getArea()<<endl;
	return 0;
}