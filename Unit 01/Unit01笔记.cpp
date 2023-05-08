/*
解决方案 > 工程项目（空项目） > 源（头）文件 
*/
#include<graphics.h>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
//控制器类
class Control {
public:
	int width = 400;
	int height = 400;
	Control() {
		initgraph(width, height, INIT_RENDERMANUAL);

	}
	Control(int w, int h) {
		initgraph(w, h, INIT_RENDERMANUAL);

	}
	~Control() {
		closegraph();
	}
};
//点类
class Point {
public:
	int x;
	int y;
};
//颜色类
class Mycolor {
public:
	int R, G, B;
	Mycolor(int r = 0, int g = 0, int b = 0) {
		R = r;
		G = g;
		B = b;
	}
	~Mycolor() {}
	int getterR() { return R; }
	int getterG() { return G; }
	int getterB() { return B; }
	void setterR(int r) { R = r; }
	void setterG(int g) { G = g; }
	void setterB(int b) { B = b; }

};
//圆类
class Circle {
public:
	int x;
	int y;
	int radius;
	string color;
	Circle() = default;
	Circle(int x_, int y_, int radius_) {
		x = x_;
		y = y_;
		radius = radius_;

	}
	~Circle() {}
	void print() {
		circle(x, y, radius);
	}

};
//矩形类
class Rectangle {
	int x1, y1;
	int x2, y2;
	int color;
	Rectangle(int x1_, int y1_, int x2_, int y2_) {
		x1 = x1_;
		x2 = x2_;
		y1 = y1_;
		y2 = y2_;
	}
	~Rectangle() {}
};
int main() {
	Control c1(640, 480);


	char str[100];
	setcolor(RED);
	inputbox_getline("请输入要绘制的图形：(circle/rectangle)", "", str, 100);
	string s1;
	s1 = str;


	if (s1 == "circle") {

		inputbox_getline("请输入circle的圆心坐标及半径，边框颜色，填充颜色", "", str, 100);


	}

	getch();

	return 0;
}