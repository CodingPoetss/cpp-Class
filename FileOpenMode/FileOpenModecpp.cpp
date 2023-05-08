#include<iostream>
#include<filesystem>
#include<fstream>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
namespace fs = std::filesystem;

int main() {

	using fo = std::ios;

	fs::path p1{ "city1.txt" }, p2{ "city2.txt" };
	
	//创建两个输出文件流，分别为app和trunc模式
	ofstream out1{ p1,std::ios::out | std::ios::app };      //追加模式
	ofstream out2{ p2,std::ios::out | std::ios::trunc };    //重写模式

	//从键盘读入字符，输出到两个文件流中
	char c;
	while (!std::cin.get(c).eof()) {       //cin.get()与get()的区别是，前者是从键盘输入中读入，而后者是从文件中读入
		out1.put(c);
		out2.put(c);
	}

	//关闭两个输出流
	out1.close();
	out2.close();


	//打开(读文件)两个输入文件流，其中一个使用ate模式
	std::fstream in1{ p1,fo::in };
	std::fstream in2{ p2,fo::in | fo::ate };

	//输出两个文件的内容
	cout << p1 << endl;
	while (!in1.get(c).eof()) {
		cout << c;
	}
	cout << p2 << endl;
	while (!in2.get(c).eof()) {
		cout << c;
	}
	
	//关闭IO文件流
	in1.close();
	in2.close();

	return 0;
}