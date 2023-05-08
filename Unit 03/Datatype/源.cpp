#include<iostream>
int main() {
	int x{ 1};
	std::cout << x << std::endl;

	std::cout << 1 / 2.f << std::endl;

	long int a(1.1);         //隐式类型转换

	std::cout << a << std::endl;
	return 0;
}