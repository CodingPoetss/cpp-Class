#include<iostream>
#include<filesystem>
#include<string>

namespace fs = std::filesystem;
int main() {

	//����path·��
	fs::path p1{ "d:\\cpp\\Example\\Unit07\\CheckPath\\Hello.txt" };  
	fs::path p2{ R"(C:\Users\HONOR 16 pro\source\repos\cpp�γ�\Unit 07\CheckPath)" };       //�Ƽ�
	fs::path p3{ "d:/cpp/Example/Unit07/CheckPath/Hello.txt" };         //�Ƽ�

	//���������ϵͳĬ�ϵ��ļ��ָ���
	std::cout <<"file separater is:"<< fs::path::preferred_separator << std::endl;      //��separater���������²ݰ����ѱ�ɾ��

	//�ж��Ƿ��ǳ����ļ�����������ļ���С
	
	if (fs::is_regular_file(p2)) {
		std::cout <<p2<<"s size is:"<< fs::file_size(p2) << std::endl;
	}

	//�ж��Ƿ���Ŀ¼�����������Ŀ¼
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory,includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << " " << e.path()<<std::endl;
		}
	}

	//�ж�·���Ƿ����
	else if (fs::exists(p2)) {
		std::cout << p2 << "is a special file\n";
	}

	else {
		std::cout << p2 << "does not exist" << std::endl;
	}

	return 0;
}