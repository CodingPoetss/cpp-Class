#include<iostream>
#include<filesystem>
#include<string>

namespace fs = std::filesystem;
int main() {

	//定义path路径
	fs::path p1{ "d:\\cpp\\Example\\Unit07\\CheckPath\\Hello.txt" };  
	fs::path p2{ R"(C:\Users\HONOR 16 pro\source\repos\cpp课程\Unit 07\CheckPath)" };       //推荐
	fs::path p3{ "d:/cpp/Example/Unit07/CheckPath/Hello.txt" };         //推荐

	//输出本电脑系统默认的文件分隔符
	std::cout <<"file separater is:"<< fs::path::preferred_separator << std::endl;      //该separater函数在最新草案中已被删除

	//判断是否是常规文件，是则输出文件大小
	
	if (fs::is_regular_file(p2)) {
		std::cout <<p2<<"s size is:"<< fs::file_size(p2) << std::endl;
	}

	//判断是否是目录，是则输出子目录
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory,includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << " " << e.path()<<std::endl;
		}
	}

	//判断路径是否存在
	else if (fs::exists(p2)) {
		std::cout << p2 << "is a special file\n";
	}

	else {
		std::cout << p2 << "does not exist" << std::endl;
	}

	return 0;
}