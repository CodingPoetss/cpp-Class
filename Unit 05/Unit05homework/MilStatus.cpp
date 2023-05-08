
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
	//int equipNum{ 0 };
	NumberOfMilStatus++;
}
MilStatus::MilStatus(int age, string name, vector<string>equip,char* leader_)
{
	this->age = age;
	this->name = name;
	equipments = equip;
	//this->equipNum = equipNum;;
	leader = new char[5];
	leader = leader_;
	NumberOfMilStatus++;
}

MilStatus::MilStatus(const MilStatus& m1) {
	age = m1.age;
	name = m1.name;
	equipments = m1.equipments;
	//equipNum = m1.equipNum;
	NumberOfMilStatus++;
}

 
MilStatus::~MilStatus()
{

	cout << leader << endl;
	delete [] leader;
	leader = nullptr;
	cout << "Delete Finished!" << endl;
}

int MilStatus::getAge() {
	return age;
}
string MilStatus::getName() {
	return name;
}
vector<string> MilStatus::getEquipments() {
	return equipments;
}
int MilStatus::getEquipNum() {
	return equipments.size();
}
 int MilStatus::getNumberOfMilStatus() {
	 return NumberOfMilStatus;
}
 int MilStatus::getNumberOfMilStatusNonStatic() {
	 return NumberOfMilStatus;
 }




void MilStatus::setAge(int age) {
	this->age = age;
}
void MilStatus::setName(string name) {
	this->name = name;
}
void MilStatus::setEquipments(vector<string>equip) {
	equipments = equip;
}
void MilStatus::AddEquipments(string s) {
	equipments.push_back(s);
}
/*void MilStatus::setEquipNum(int equipNum) {
	this->equipNum = equipNum;
}*/


