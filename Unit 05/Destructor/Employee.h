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
	Data birthday;
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Data birthday) { this->birthday = birthday; }
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Data* getBirthday() { return &birthday; }
	std::string toString() {
		return (name + " "+(gender == Gender::male ? std::string("male") : std::string("famale")) +" "+ birthday.toString());
	}

	Employee(std::string name,Gender gender,Data birthday):name{name},gender{gender},birthday{birthday}{}
	Employee():Employee("Alan",Gender::male,Data(2000,4,1)){}
};