#include<iostream>
#include"Data.h"
#include"Employee.h"

int Employee::numberOfObjects{ 0 };
int main() {
	Employee e1{ "Alex",Gender::male,Data(1993,7,1) };
	std::cout << e1.toString() << std::endl;

	Employee e2{ e1 };
	std::cout << e2.toString() << std::endl;
	return 0;
}