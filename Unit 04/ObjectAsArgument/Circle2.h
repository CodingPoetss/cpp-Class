//#pragma once
//__pragma(once)          //vs��������ֻ�������ַ�������֧��__pragma("once")

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
	double radius;

public:                         //ͷ�ļ���ֻ��Ҫ�������������캯�����ڵ�����������Դ�ļ��о���չ��
	Circle();
	Circle(double r);
	double getArea();
	double getRadius();
	Circle setRadius(double radius);
};



#endif CIRCLE_H_