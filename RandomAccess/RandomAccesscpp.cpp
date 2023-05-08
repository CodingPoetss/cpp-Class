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
	//task1:在文件中存入两个long long int 和"Hello World"字符串
	fs::path  p{ "test.txt" };
	std::fstream  file{ p,std::ios::out|std::ios::in | std::ios::trunc|std::ios::trunc };

	auto x{ 12LL }, y{ 24LL };
	char str[]{ "Hello World!" };     //避免使用字符串，要将string类进行序列化，较为复杂

	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(long long int));
	file.write(&str[0], sizeof(str));


	//task2:读取
	char buf[100]{ 0 };
	file.seekg(2 * sizeof(long long int), std::ios::beg);
	file.read(buf, sizeof("Hello"));

	cout << buf << endl;
	return 0;

}

