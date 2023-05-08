#pragma once
/*
��������дһ�����װ�ľ����࣬�����������棬���䣬������
1)	������MilStatus,�����ĸ�˽�б�����Ա��age(int), name(char����),
2)	һ�� no-arg ctor���á�\0�����name[]��
3)��дһ���вι��캯����Ϊ��Ա����Ĭ�ϳ�ʼֵ����ʼֵ�����з��ӣ���
4)getter: getName(),getAge()
5)setter: setName(),setAge() �ֱ����ڸ�ֵ��
6)���������У�����һ��MilStatus����m1,����set�������������Ϣ������get�������������Ϣ��
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

