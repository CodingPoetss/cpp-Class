#include<iostream>
#include<string>
#include<array>
#include"MilStatus.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;

void printEquipments(MilStatus* p) {
	for (auto s : p->getEquipments()) {
		cout << s << " ";
	}
	cout << endl;
}



int main() {
	MilStatus s2{};
	s2.setAge(23);
	s2.setName("Jack");
	s2.setEquipments({ "Sword", "Armor","Horse" });
	s2.setEquipNum(3);

	MilStatus s3{ s2 };
	cout << "Age:" << s3.getAge() << endl;
	cout << "Name:" << s3.getName() << endl;
	cout << "Equipments:";
	for (auto s : s3.getEquipments()) {                                //返回一个array数组
		cout << s << ' ';
	}
	cout << endl;
	cout << "EquipNum:" << s3.getEquipNum() << endl;

	MilStatus* s4 = new MilStatus{ 13,"Nancy" ,{"Horse","Sword"},2 };           //new一个类型时只能使用指向对象的指针

	cout << "Age:" << s4->getAge() << endl;
	cout << "Name:" << s4->getName() << endl;
	cout << "Equipments:";
	for (auto s : s4->getEquipments()) {                                //返回一个array数组
		cout << s << ' ';
	}
	cout << endl;
	cout << "EquipNum:" << s4->getEquipNum() << endl;
	
	delete s4;
	MilStatus s5{ 42,"Neol" ,{ "Cpp","Java","C#","Python","Matlab" },5 };
	MilStatus a[3]{ s2,s3,s5 };

	for (auto i : a){
		printEquipments(&i);
	}



	return 0;
}