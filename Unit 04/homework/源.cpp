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
	int age{0};
	string name;
	array<string, 10>equipments;
	int equipNum{0};
public:
	MilStatus() {
		int age{0};
		string name{ "" };
		for (auto i : equipments) {
			i.assign("");
		}
		int equipNum{ 0 };
	}
	MilStatus(int age,string name,array<string,10>equip,int equipNum)
	{
		this->age = age;
		this->name = name;
		equipments = equip;
		this->equipNum=equipNum;
	}

	MilStatus( const MilStatus& m1) {
		equipments = m1.equipments;
		equipNum = m1.equipNum;
	}

	~MilStatus()
	{
	}

	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}
	array<string,10> getEquipments() {
		return equipments;
	}
	int getEquipNum() {
		return equipNum;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setName(string name) {
		this->name = name;
	}
	void setEquipments(array<string, 10>equip) {
		equipments = equip;
	}
	void setEquipNum(int equipNum) {
		this->equipNum = equipNum;
	}
};

int main() {
	MilStatus s1{};
	s1.setAge(23);
	s1.setName("Jack");
	s1.setEquipments({"Sword", "Armor","Horse"});
	s1.setEquipNum(3);
	cout << "Age:" << s1.getAge() << endl;
	cout << "Name:" << s1.getName() << endl;
	cout << "Equipments:";
	for (auto s : s1.getEquipments()) {                                //返回一个array数组
		cout << s << ' ';
	}
	cout << endl;
	cout << "EquipNum:" << s1.getEquipNum() << endl;

	
	MilStatus s2{s1};                 //退休，装备继承
	cout << "Age:" << s2.getAge() << endl;
	cout << "Name:" << s2.getName() << endl;
	cout << "Equipments:";
	for (auto s : s2.getEquipments()) {                                //返回一个array数组
		cout << s << ' ';
	}
	cout << endl;
	cout << "EquipNum:" << s2.getEquipNum() << endl;
	return 0;
}