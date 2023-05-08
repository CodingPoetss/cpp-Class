#include<iostream>
#include"Circle.h"

//在class类外进行对其函数进行构造时，要加上::表示限制域关系

	Circle::Circle() {
	  radius = 1.0;
   }
	Circle::Circle(double r) {
		radius = r;
	}

	double Circle::getArea() {
		return 3.14* radius* radius;
	}


