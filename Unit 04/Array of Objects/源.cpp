#include<iostream>
using std::cout;
using std::endl;

class Circle {
	double radius;
public:
	Circle() {
		radius = 1.0;
	}
	Circle(double radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14* radius* radius;
	}
	void setRadius(double radius) {
		this->radius = radius;
	}
};

int main() {
	Circle ca1[10];
	cout << ca1[6].getArea() << endl;

	Circle ca2[]={ Circle{1.0},Circle{2.0},Circle{3.0}};
	//auto ca2 = new Circle[3]{ 1.0,2.0,3.0 };

	Circle ca3[3]{ 10.0,11.0,12.0 };
	Circle ca4[3] = { 3.1,{},5 };

	/*auto* p1 = new Circle[3];
	auto p2 = new Circle[3]{ 3.1,{},5 };

	delete[] p1;
	delete[] p1;
	p1 = p2 = nullptr;
	delete[] p2;*/


	ca2[2].setRadius(4.0);
	ca3[1].setRadius(100.0);

	for (int i = 0; i < static_cast<int>(sizeof(ca2) / sizeof(ca2[0])); i++) {
		cout<< ca2[i].getArea() << endl;
	}

	for (auto x : ca3) {
		cout << x.getArea() << endl;
	}









	return 0;
}