#include<iostream>
#include"Circle3.h"

int main() {
	Circle c{ 1.0 };

	std::cout << c.setRadius(4.0).setRadius(3.0).getRadius() << std::endl;
	return 0;
}