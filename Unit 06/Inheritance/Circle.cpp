#include<iostream>
#include"Circle.h"

//��class������ж��亯�����й���ʱ��Ҫ����::��ʾ�������ϵ

Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double r, Color c, bool f) :Shape{c,f} {
	radius = r;

}

double Circle::getArea() {
	return 3.14 * radius * radius;
}


