#include<iostream>
#include"Data.h"
#include"Employee.h"

int numberOfObjects=0;
int main() {
	Employee e1{};
	std::cout << e1.toString() << std::endl;

	Employee* e2 = new Employee{ "Jonh",Gender::male,Data(1990,3,2) };        //����һ��ָ��employee������ָ��
	std::cout << e2->toString() << std::endl;

	{
		Employee e3{ "Alice",Gender::female,Data(1989,10,1) };    //e3���ڸ������������棬��������󼴻����destructor����
		std::cout << e3.toString() << std::endl;
	}


	return 0;
}
