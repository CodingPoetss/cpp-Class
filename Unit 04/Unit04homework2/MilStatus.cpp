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


