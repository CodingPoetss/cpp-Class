#include<iostream>
#include<filesystem>
#include<fstream>
#include<array>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
namespace fs = std::filesystem;

int main() {
	//task1:���ļ��д�������long long int ��"Hello World"�ַ���
	fs::path  p{ "test.txt" };
	std::fstream  file{ p,std::ios::out|std::ios::in | std::ios::trunc|std::ios::trunc };

	auto x{ 12LL }, y{ 24LL };
	char str[]{ "Hello World!" };     //����ʹ���ַ�����Ҫ��string��������л�����Ϊ����

	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(long long int));
	file.write(&str[0], sizeof(str));


	//task2:��ȡ
	char buf[100]{ 0 };
	file.seekg(2 * sizeof(long long int), std::ios::beg);
	file.read(buf, sizeof("Hello"));

	cout << buf << endl;
	return 0;

}

