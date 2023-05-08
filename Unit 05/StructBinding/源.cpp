#include<iostream>
#include<array>
//"结构化声明"绑定示例

struct S
{
	double d1{ 1.0 };
	int i1{ 32 };
};

class C
{
private:
	int i1{ 99 };
public:
	int i2{ 1 };
	char c[3]{ 'a','b','\0'};
};

int main() {

	S s;
	C c;
	auto [d1, i1] {s};

	auto& [i2, c2] {c};

	std::cout << d1 << " " << i1 << std::endl;
	std::cout << i2 << " " << c2 << std::endl;




















	/*
	int a[]{1,2,3};
	std::array b{ 4,5,6 };

	auto [e1, e2, e3] =a;

	auto &[f1, f2, f3] {a};

	f1 = 10;

	std::cout << e1 << " " << e2 << " " << e3 << std::endl;
	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	*/
	return 0;
}