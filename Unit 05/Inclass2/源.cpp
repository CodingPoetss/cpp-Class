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
constexpr int MAX_CAPACITY = 10;

class MilStatus
{
private:
	int age{ 0 };
	string name;
	array<string, 10>equipments;
	int equipNum{ 0 };
public:
	/*MilStatus(){
		int age{ 0 };
		string name{ "" };
		for (auto i : equipments) {
			i.assign("");
		}
		int equipNum{ 0 };
	}*/
	MilStatus(int age, string name, array<string, 10>equip, int equipNum)
	{
		this->age = age;
		this->name = name;
		equipments = equip;
		this->equipNum = equipNum;
	}

	MilStatus() :MilStatus(33, "Martin", { "Horse" }, 1) {              //����Ĭ�Ϲ��캯�������д�����
	}

	MilStatus(const MilStatus& m1) {
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
	array<string, 10> getEquipments() {
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


void printAll(MilStatus s1) {
	cout << "Age:" << s1.getAge() << endl;
	cout << "Name:" << s1.getName() << endl;
	cout << "Equipments:";
	for (auto s : s1.getEquipments()) {                                //����һ��array����
		cout << s << ' ';
	}
	cout << endl;
	cout << "EquipNum:" << s1.getEquipNum() << endl;
}


int main() {
	MilStatus s1{};
	printAll(s1);



	return 0;
}