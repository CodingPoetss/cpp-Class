#include<iostream>
#include"Data.h"
#include"Employee.h"

int main() {
	Employee e;                                   //��ʱΪĬ�ϳ�ʼֵ
	std::cout << e.toString() << std::endl;

	e.setBirthday(Data(1999, 1, 1));              //������������
	std::cout << e.toString() << std::endl;       

	e.getBirthday()->setYear(1998);	  //����getBirthday����һ��ָ��Data���ָ�룬Ȼ���ָ��ָ�򲢵���Data�����е�setYear����
	                                               
	std::cout << e.toString() << std::endl;

	e.setName("Alice");
	e.setGender(Gender::female);
	std::cout << e.toString() << std::endl;

	return 0;
}