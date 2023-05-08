#include<iostream>
#include"Data.h"
#include"Employee.h"

int main() {
	Employee e;                                   //此时为默认初始值
	std::cout << e.toString() << std::endl;

	e.setBirthday(Data(1999, 1, 1));              //传入匿名对象
	std::cout << e.toString() << std::endl;       

	e.getBirthday()->setYear(1998);	  //首先getBirthday返回一个指向Data类的指针，然后该指针指向并调用Data类型中的setYear函数
	                                               
	std::cout << e.toString() << std::endl;

	e.setName("Alice");
	e.setGender(Gender::female);
	std::cout << e.toString() << std::endl;

	return 0;
}