#pragma once
#include<iostream>
#include<string>
#include<array>
using std::string;
using namespace std::string_literals;    //后面加s时自动转化为字符串常量
enum class Color {
	white, black, red, green, blue, yellow,    //自动编号颜色，即white、black等依次排为1 c[static_cast<int>(color)]
};


class Shape {
private:
	Color color{ Color::black };
	bool filled{ false };
	std::array<string, 6>colorNames{ "white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s };
public:
	Shape();
	Shape(Color color_, bool filled_);

	Color getColor();
	void setColor(Color color);
	bool isFilled();
	void setFilled(bool filled);

	string toString();
	string colorToString();
	string filledToString();

	virtual double getArea() = 0;
};