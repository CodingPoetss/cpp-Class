/*
我们来编写一个简易版的军籍类，包含两个方面，年龄，姓名。
1)	类名是MilStatus,他有四个私有变量成员：age(int), name(char数组),
2)	一个 no-arg ctor，用“\0”填充name[]；
3)编写一个有参构造函数，为成员设置默认初始值（初始值可自行发挥）；
4)getter: getName(),getAge()
5)setter: setName(),setAge() 分别用于赋值；
6)在主函数中，创建一个MilStatus对象m1,利用set函数填入合适信息并利用get函数输出对象信息；
*/

#include<iostream>
#include<string>
#include<array>
#include"MilStatus.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;


	MilStatus::MilStatus() {
		int age{ 0 };
		string name{ "" };
		for (auto i : equipments) {
			i.assign("");
		}
		int equipNum{ 0 };
	}
	MilStatus::MilStatus(int age, string name, array<string, 10>equip, int equipNum)
	{
		this->age = age;
		this->name = name;
		equipments = equip;
		this->equipNum = equipNum;
	}

	MilStatus::MilStatus(const MilStatus& m1) {
		age = m1.age;
		name = m1.name;
		equipments = m1.equipments;
		equipNum = m1.equipNum;
	}


	int MilStatus::getAge() {
		return age;
	}
	string MilStatus::getName() {
		return name;
	}
	array<string, 10> MilStatus::getEquipments() {
		return equipments;
	}
	int MilStatus::getEquipNum() {
		return equipNum;
	}
	void MilStatus::setAge(int age) {
		this->age = age;
	}
	void MilStatus::setName(string name) {
		this->name = name;
	}
	void MilStatus::setEquipments(array<string, 10>equip) {
		equipments = equip;
	}
	void MilStatus::setEquipNum(int equipNum) {
		this->equipNum = equipNum;
	}


