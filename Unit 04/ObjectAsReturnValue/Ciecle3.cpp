#include<iostream>
#include"Circle3.h"

//��class������ж��亯�����й���ʱ��Ҫ����::��ʾ�������ϵ

Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14* radius* radius;
}

double Circle::getRadius() {
	return radius;
}

Circle& Circle::setRadius(double radius) {
	this->radius = radius;
	return *this;
}