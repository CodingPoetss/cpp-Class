//#pragma once
//__pragma(once)          //vs��������ֻ�������ַ�������֧��__pragma("once")

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include"Shape.h"

class Circle:public Shape {
	double radius;

public:                         //ͷ�ļ���ֻ��Ҫ�������������캯�����ڵ�����������Դ�ļ��о���չ��
	Circle();
	Circle(double r,Color c,bool f);
	double getArea();

	string toString();
};



#endif CIRCLE_H_
