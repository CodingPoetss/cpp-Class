#include<iostream>
#include<filesystem>
#include<string>
using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main() {
	//����path����
	fs::path p1{ R"(c:\temp)" };
	fs::path p2{ R"(c:\temp)" };
	fs::path p3{ R"(c:\temp)" };

	//append��/=                   //Ĭ���Զ���ӷָ����
	p1.append(R"(users)");
	p1 /= R"(cyd)";

	cout << p1 << endl;

	//concat��+=                   //������ӷָ���
	p2.concat(R"(users)");
	p2 += R"(cyd)";

	cout << p2 << endl;

	//�������/ƴ��һ����·��
	p3 = p3 / R"(C:\temp)" / R"(users)" / R"(cyd)";
	cout << p3 << endl;

	return 0;

}