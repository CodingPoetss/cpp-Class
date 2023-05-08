#include<iostream>
#include<filesystem>
#include<string>
#include<array>
#include<fstream>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

namespace fs = std::filesystem;

int main() {
	//打开文件
	fs::path p{ "greatwall.txt" };
	ifstream in{ p };
	if (!in) {                                            //!in.fail()  等价判断文件是否打开
		std::cout << "Can't open file " << p << endl;
		std::abort();        //中止程序进行
	}


	//istream::getline函数(类成员函数)
	constexpr int SIZE = 1024;

	std::array<char, SIZE> buf;


	while (!in.eof()) {
		in.getline(&buf[0], SIZE, '#');
		cout << &buf[0] << endl;
	}


	//std::getline(非类成员函数)
	std::string name1{};

	in.close();
	in.open(p);

	while (!in.eof()) {
		std::getline(in, name1, '#');
		cout << name1 << endl;
	}




}