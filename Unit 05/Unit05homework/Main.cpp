#include<iostream>
#include<string>
#include<array>
#include"MilStatus.h"
#include"AsFriend.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;

int MilStatus::NumberOfMilStatus{ 0 };
int main() {

	char a[]{ 's','x','s'};
	MilStatus s1{ 33, "�����", { "�޾�֮��","��ɫ�и���","����˾��" },a };
	for (auto i : s1.getEquipments()) {
		cout << i << " ";
	}
	cout <<"װ������:"<< s1.getEquipNum() << endl;


	MilStatus s2{ 18,"��ɲ���",{"���֮��"},a};
	s2.AddEquipments("���ߵıӻ�");
	for (auto i : s2.getEquipments()) {
		cout << i << " ";
	}
	cout << "װ������:" << s2.getEquipNum() << endl;












	/*	char a[]{ "xuanzang" };
	MilStatus s1{ 33, "�����", { "�޾�֮��","��ɫ�и���","����˾��" }, 3 ,a};
	*/


	/*
	AsFriend f1;
	cout << f1.FriendgetNumberOfStatus() << endl;
	AsFriend f2;
	cout << f2.FriendgetNumberOfStatus() << endl;
	*/


	/*
	
	MilStatus s1{ 33, "�����", { "�޾�֮��","��ɫ�и���","����˾��" }, 3 };
	cout <<"Now MilStatus:" << s1.getNumberOfMilStatus() << endl;
	MilStatus s2{ 18,"��ɲ���",{"���֮��"},1 };
	cout << "Now MilStatus:" << s2.getNumberOfMilStatusNonStatic() << endl;
	MilStatus s3{ };
	cout << "Now MilStatus:" << MilStatus::getNumberOfMilStatus() << endl;
	MilStatus s4{};
	//cout <<"Now MilStatus:"<< MilStatus::getNumberOfMilStatusNonStatic() << endl;

	*/





	return 0;
}