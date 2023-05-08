#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;

namespace fs = std::filesystem;
int main() {
	
	fs::path p{ R"(C:\Users\HONOR 16 pro\source\repos\cpp课程\PathQuery\Pathquery.cpp)" };

	if (p.empty()) {
		cout << "Path " << p << "is empty." << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path " << p << "does not exist." << endl;
		std::exit(0);
	}

	cout << "root_name(): " << p.root_name() << endl;              //根名
	cout << "root_path(): " << p.root_path() << endl;              //根路径
	cout << "relative_name(): " << p.relative_path() << endl;      //相对路径  

	cout << "parent_path(): " << p.parent_path() << endl;          //父路径
	cout << "filename(): " << p.filename() << endl;                //文件名
	cout << "stem(): " << p.stem() << endl;                        //文件名主干
	cout << "extension(): " << p.extension() << endl;              //扩展名

	return 0;
}