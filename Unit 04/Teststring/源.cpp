#include<iostream>
#include<string>
using namespace std;

int main() {
	//创建字符串
	string s{ "Hello!" };

	//clear
	s.clear();

	//用数组为字符串赋值
	char arr[]{ 'W','o','r','l','d','\0' };           //使用字符数组对字符串进行初始化时，必须要加上\0表示字符数组的结束
	s += arr;

	//assign()
	s.assign("1024");

	//append
	s.append("  ");
	s.append(5, '\t');
	s.append(1,'!');     //或者s.append("!");
	cout << s << endl;

	//insert 空白
	s.insert(0, "    ");        //前面一个参数为插入的index

	//移除字符前面的空白
	s.erase(0,s.find_first_not_of(" \t\n\r"));
	//移除字符后面的空白
	s.erase(s.find_last_not_of(" \t\n\r")+1);

	//把字串转化为整数或浮点数
	int x = std::stoi(s);


	cout << s << endl;
	cout << "x=" << x << endl;

	string s2 = std::to_string(x);
	cout << "s2:" << s2;
	return 0;
}