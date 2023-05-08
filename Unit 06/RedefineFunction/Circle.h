//#pragma once
//__pragma(once)          //vs中括号内只能输入字符串，不支持__pragma("once")

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include"Shape.h"

class Circle:public Shape {
	double radius;

public:                         //头文件中只需要声明，包括构造函数在内的其他函数在源文件中具体展开
	Circle();
	Circle(double r,Color c,bool f);
	double getArea();

	string toString();
};



#endif CIRCLE_H_
