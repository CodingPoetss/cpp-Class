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
	MilStatus s1{ 33, "孙悟空", { "无尽之刃","黑色切割者","名刀司命" },a };
	for (auto i : s1.getEquipments()) {
		cout << i << " ";
	}
	cout <<"装备数量:"<< s1.getEquipNum() << endl;


	MilStatus s2{ 18,"马可波罗",{"苍穹之刃"},a};
	s2.AddEquipments("贤者的庇护");
	for (auto i : s2.getEquipments()) {
		cout << i << " ";
	}
	cout << "装备数量:" << s2.getEquipNum() << endl;












	/*	char a[]{ "xuanzang" };
	MilStatus s1{ 33, "孙悟空", { "无尽之刃","黑色切割者","名刀司命" }, 3 ,a};
	*/


	/*
	AsFriend f1;
	cout << f1.FriendgetNumberOfStatus() << endl;
	AsFriend f2;
	cout << f2.FriendgetNumberOfStatus() << endl;
	*/


	/*
	
	MilStatus s1{ 33, "孙悟空", { "无尽之刃","黑色切割者","名刀司命" }, 3 };
	cout <<"Now MilStatus:" << s1.getNumberOfMilStatus() << endl;
	MilStatus s2{ 18,"马可波罗",{"苍穹之刃"},1 };
	cout << "Now MilStatus:" << s2.getNumberOfMilStatusNonStatic() << endl;
	MilStatus s3{ };
	cout << "Now MilStatus:" << MilStatus::getNumberOfMilStatus() << endl;
	MilStatus s4{};
	//cout <<"Now MilStatus:"<< MilStatus::getNumberOfMilStatusNonStatic() << endl;

	*/





	return 0;
}