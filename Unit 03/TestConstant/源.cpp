#include<iostream>
#include<typeinfo>
int main() {

	//常指针
	int y = 20;
	int z = 30;
	int const x{10};
	int const* p1 = &x;
	p1 = &y;                  //p1具有的属性:可以更改指向的地址，但无论指向哪个地址都不能改变该地址的值


	//指针常量
	int* const p2 = &y;
	*p2 = z;
	//p2 = &z;               //p2具有的属性：比较专一，一旦指向某一地址就不能更改，但是可以和普通指针一样通过*引用来改变地址的值
	std::cout << *p2;

	
	//常指针常量
	const int* const p3 = &y;
	//p3 = &z;
	//*p3 = z;               //p3同时具有p1、p2的性质



	//字符串
	// char* str = "Hello!"; //若之前无const，则说明""之内的内容（是常量）可以被*str的方式改变
	//*str = 'p';
	const char* str = "Hello!";

	//auto后加const也具常量属性
	auto const m{ 'z' };
	std::cout << typeid(m).name();
	//m = 'g';

	return 0;
}