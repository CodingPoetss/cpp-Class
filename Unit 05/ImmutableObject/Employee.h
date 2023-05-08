#pragma once
#include<iostream>
#include<string>
#include"Data.h"
enum class Gender          //枚举类型 带有范围限制
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
	void setBirthday(Data birthday) { *(this->birthday) = birthday; }      //在前面加上简引用之后，前后都是data普通类型
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Data getBirthday() { return *birthday; }
	std::string toString() {
		return (name + " "+(gender == Gender::male ? std::string("male") : std::string("famale")) +" "+ birthday->toString());
	}

	Employee(std::string name, Gender gender, Data birthday) :name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday=new Data{ birthday };          //与初始化列表的不同仅在于这是在堆区new出来的
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