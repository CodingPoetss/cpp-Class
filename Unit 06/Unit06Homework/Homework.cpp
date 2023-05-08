#include<iostream>
#include<string>
#include<array>
using namespace std;
using namespace std::string_literals;
class Student {
private:
	string name{};
	string id{};
public:
	Student() {
		name = {"Null"};
		id = {"Null"};
	}
	Student(string name, string id) {
		this->name = name;
		this->id = id;
	}
	void setName(string name) { this->name = name; }
	void setId(string id) { this->id = id; }
	string getName() { return name; }
	string getId() { return id; }

	string PrintInformation() {
		return ("Name:" + name + " " + "ID:" + id + " ");
	}

	virtual string getInfo() {return ("Name;"+name + "\t" +"ID:" +id); }

};

class Graduate :public Student{
private:
	string* supervisor;        //ָ����ʦ
public:
	Graduate() { supervisor = new string{}; }
	Graduate(string n, string i, string s) :Student{ n,i }, supervisor{ new string{} }{
		*supervisor = s;
	}
	~Graduate()
	{
		delete supervisor;
		cout << "Delete Finished!" << endl;
	}
	void setSupervisor(string s) { *supervisor=s; }
	string getSupervisor() { return *supervisor; }

	string PrintInformation() {
		return ( Student::PrintInformation()+ "Supervisor:" + *supervisor);
	}

	virtual string getInfo() override { return Student::getInfo()+"\t"+"Supervisor:"+*supervisor; }
};


string print(Student* s) {
	return s->PrintInformation();
}

string print(Student& s) {
	return s.PrintInformation();
}



int main() {
	
	Student s0{ "�����","2022212144" };
	Graduate g0{ "����ʿ���","2022331732","٤����" };
	/*
	cout<<s0.PrintInformation()<<endl;
	cout<<g0.PrintInformation()<<endl;
	*/
	auto s1 = new Student{ "����","1001" }, s2{ new Student{"����","1002"} };
	
	cout << print(s0) << endl;
	cout << print(&s0) << endl;



	Graduate g, * pg;      //����
	Student s, * ps;       //����
	//g = s;    //g�еĲ�����Ϣs�����ṩ
	s = g;    //�ض�
	//pg = &s;   //ֻ���ɻ���ָ�����࣬������������ָ�����
	ps = &g;
	//pg = dynamic_cast<Graduate>(&s);     ָ�����Ͳ��ɱ�ת��Ϊ�����
	//ps = dynamic_cast<Student>(&g);


	return 0;
}