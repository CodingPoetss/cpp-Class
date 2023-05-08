#include<iostream>
#include<typeinfo>
using std::cout;
using std::endl;
using std::cin;

auto max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	//auto变量必须在定义时初始化
	auto x{ 3 };

	//定义在一个auto序列的变量必须始终推导为同一类型
	auto a1{ 2 }, a2{ 3 };

	//如果初始化表达式是引用或const，则去除引用或者const语义(若auto关键字加上&，则不去除引用或const语义)
	int y1{ 42 }, & y2{ y1 };
	auto& y3{ y2 };    

	//初始化为数组时，auto关键字推导为指针(加上&后推导为数组)
	int p1[3]{ 1,2,3 };
	auto p2{ p1 };
	auto& p3{ p1 };
	cout << typeid(p2).name() << endl;
	cout << typeid(p3).name() << endl;

	//C++14中可以作为函数的返回值和参数类型
	cout<<max(3, 4)<<endl;
	
}

