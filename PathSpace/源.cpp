#include<iostream>
#include<filesystem>
#include<string>



int main() {
	using std::cout;
	using std::endl;
	namespace fs = std::filesystem;


	fs::path p{ "C:\\" };

	//fs::space()��һ���ṹ��
	cout << "C:total space: " << fs::space(p).capacity << endl;
	cout << "C:free space:" << fs::space(p).free << endl;

}