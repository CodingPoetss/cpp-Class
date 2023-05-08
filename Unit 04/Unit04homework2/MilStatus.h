#pragma once
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

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;

class MilStatus
{
private:
	int age{ 0 };
	string name;
	array<string, 10>equipments;
	int equipNum{ 0 };
public:
	MilStatus();
	MilStatus(int age, string name, array<string, 10>equip, int equipNum);
	MilStatus(const MilStatus& m1);
	int getAge();
	string getName();
	array<string, 10> getEquipments();
	int getEquipNum();
	void setAge(int age);
	void setName(string name);
	void setEquipments(array<string, 10>equip);
	void setEquipNum(int equipNum);
};

