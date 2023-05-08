#include<iostream>
#include"Square.h"

int Square::numberOfObjects = 0;
int main() {
	Square s1(10.0);
	std::cout << "Squares:" << Square::getNumberOfObject() << std::endl;

	Square s2{ s1 };
	std::cout << "Squares:" << Square::getNumberOfObject() << std::endl;

	Square* s3 = new Square{ s1 };      //¶ÑÇø
	std::cout << "Squares:" << Square::getNumberOfObject() << std::endl;

	std::cout <<"s3's area is:" << s3->getArea() << std::endl;

	delete s3;
	std::cout << "Squares:" << Square::getNumberOfObject() << std::endl;
	return 0;
}