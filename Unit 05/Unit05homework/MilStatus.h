#pragma once

#include<iostream>
#include<string>
#include<array>
#include<vector>


using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;
using std::vector;

class MilStatus
{
private:
	int age{ 0 };
	string name;
	//array<string, 10>equipments;
	vector<string>equipments{""};
	//int equipNum{ 0 };
	char* leader;
	static int NumberOfMilStatus;
public:
	friend class AsFriend;

	MilStatus();
	MilStatus(int age, string name, vector<string>equip, char* leader_);   //含参构造函数
	MilStatus(const MilStatus& m1);    //拷贝构造函数
	~MilStatus();

	int getAge();                    //getter
	string getName();
	//array<string, 10> getEquipments();
	vector<string> getEquipments();
	int getEquipNum();
	static int getNumberOfMilStatus();
	int getNumberOfMilStatusNonStatic();



	void setAge(int age);            //setter
	void setName(string name);
	//void setEquipments(array<string, 10>equip);
	void setEquipments(vector<string>equip);
	void setEquipNum(int equipNum);
	void AddEquipments(string s);


};

