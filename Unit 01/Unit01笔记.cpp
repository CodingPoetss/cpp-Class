/*
������� > ������Ŀ������Ŀ�� > Դ��ͷ���ļ� 
*/
#include<graphics.h>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
//��������
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
//����
class Point {
public:
	int x;
	int y;
};
//��ɫ��
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
//Բ��
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
//������
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
	inputbox_getline("������Ҫ���Ƶ�ͼ�Σ�(circle/rectangle)", "", str, 100);
	string s1;
	s1 = str;


	if (s1 == "circle") {

		inputbox_getline("������circle��Բ�����꼰�뾶���߿���ɫ�������ɫ", "", str, 100);


	}

	getch();

	return 0;
}