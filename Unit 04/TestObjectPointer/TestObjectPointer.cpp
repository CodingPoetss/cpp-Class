#include<iostream>
#include<typeinfo>
#include"Circle.h"

int main() {

	auto c1 = new Circle{ 1.0 };          //�ȼ���Circle* c1 = new Circle{ 1.0 };
	Circle c3{ 2.0 };
	Circle* c2 = &c3;

	std::cout << c1->getArea() << std::endl;
	std::cout << (*c2).getArea() << std::endl;            //����������ȼ����ڼ�����,��Ҫ��*c2��������

	std::cout << typeid(c1).name() << std::endl;

	auto c5 = new Circle[3]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; i++) {
		std::cout << c5[i].getArea() << std::endl;
	}

	/*for (auto p : c5) {
		std::cout << p->getArea() << std::endl;       ����ʹ�û��ڷ�Χ��forѭ��
	}
	*/



	delete c1;
	delete[] c5;
	c1 = c2 = nullptr;
	delete c1;
	return 0;
}