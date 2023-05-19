#include<iostream>
#include<string>


template <typename T>
T max(T x, T y ,T z) {
	return (x > y ? x : y) > z ? (x > y ? x : y) : z;
}

template <typename T>
class MyString {
private:
	T data;
public:
	MyString(T data) :data{ data } {}
	void print() {
		std::cout << std::to_string(data) << std::endl;
	}
};


template int max<int>(int x, int y ,int z);  //模板实例化，“template 类型名 函数名<类型名>(函数传入参数原型)”
using IntString = MyString<int>;


int main() {

	int a{ 1 }, b{ 2 }, c{ 3 };
	//double d{ 6.6 };
	IntString n{ 1 }, m{ 2 }, t{ 3 };
	MyString<double>g{ 1.1 }, d{ 2.2 }, e{ 3.3 };
	n.print();
	m.print();
	t.print();
	g.print();
	d.print();
	e.print();


	std::cout << "The max number is:" << max(a, b, c) << std::endl;

	return 0;
}


