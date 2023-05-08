#pragma once
#include<iostream>
#include<string>
#include"Data.h"
enum class Gender          //ö������ ���з�Χ����
{
	male,
	female,
};
class Employee {
private:
	std::string name;
	Gender gender;
	Data* birthday;
	 static int numberOfObjects;
public:
	
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Data birthday) { *(this->birthday) = birthday; }      //��ǰ����ϼ�����֮��ǰ����data��ͨ����
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Data getBirthday() { return *birthday; }
	std::string toString() {
		return (name + " "+(gender == Gender::male ? std::string("male") : std::string("famale")) +" "+ birthday->toString());
	}

	Employee(std::string name, Gender gender, Data birthday) :name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday=new Data{ birthday };          //���ʼ���б�Ĳ�ͬ�����������ڶ���new������
		std::cout << "Now there are:" << numberOfObjects << "employees" << std::endl;
	}
	Employee():Employee("Alan",Gender::male,Data(2000,4,1)){}
	~Employee()
	{
		numberOfObjects--;
		delete birthday;
		birthday = nullptr;
	}
};