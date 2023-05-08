#pragma once
#include"Shape.h"

class Rectangle:public Shape {
private:
	double width{ 1.0 };
	double height{ 1.0 };
public:
	Rectangle() = default;
	Rectangle(double w, double h,Color c,bool f);
	double getWidth() const;
	void setWidth(double width);
	double getHeight() const;
	void setHeight(double height);

	double getArea();

};