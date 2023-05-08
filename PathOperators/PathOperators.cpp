#include<iostream>
#include<filesystem>
#include<string>
using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main() {
	//定义path对象
	fs::path p1{ R"(c:\temp)" };
	fs::path p2{ R"(c:\temp)" };
	fs::path p3{ R"(c:\temp)" };

	//append和/=                   //默认自动添加分割符号
	p1.append(R"(users)");
	p1 /= R"(cyd)";

	cout << p1 << endl;

	//concat和+=                   //不会添加分隔符
	p2.concat(R"(users)");
	p2 += R"(cyd)";

	cout << p2 << endl;

	//用运算符/拼凑一个新路径
	p3 = p3 / R"(C:\temp)" / R"(users)" / R"(cyd)";
	cout << p3 << endl;

	return 0;

}