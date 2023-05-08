#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;

namespace fs = std::filesystem;
int main() {
	
	fs::path p{ R"(C:\Users\HONOR 16 pro\source\repos\cpp�γ�\PathQuery\Pathquery.cpp)" };

	if (p.empty()) {
		cout << "Path " << p << "is empty." << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path " << p << "does not exist." << endl;
		std::exit(0);
	}

	cout << "root_name(): " << p.root_name() << endl;              //����
	cout << "root_path(): " << p.root_path() << endl;              //��·��
	cout << "relative_name(): " << p.relative_path() << endl;      //���·��  

	cout << "parent_path(): " << p.parent_path() << endl;          //��·��
	cout << "filename(): " << p.filename() << endl;                //�ļ���
	cout << "stem(): " << p.stem() << endl;                        //�ļ�������
	cout << "extension(): " << p.extension() << endl;              //��չ��

	return 0;
}