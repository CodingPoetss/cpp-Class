#include<iostream>
#include<filesystem>
#include<string>
#include<fstream>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ifstream in{ p };

	if (in.fail()) {
		cout << "Can't open the file " << p << endl;
	}

	string name{};
	double score{};


	/*
	in >> name >> score;
	cout << name << " " << score << endl;

	in >> name >> score;
	cout << name << " " << score << endl;
	*/
	
	char x{};
	
	while (!in.get(x).eof()) {	    //in.get(x)���Ƕ���һ���ַ����ַ�����x
		cout << x;
	}

	while (!in.eof()) {
		x=in.get();        //int������ʽת��Ϊchar����
		cout << x;
	}

	while (!in.eof()) {
		in.get(x);         //�������һλʱ����һλ
		cout << x;
	}

	

	return 0;
}