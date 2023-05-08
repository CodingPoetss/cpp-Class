#include <iostream>
#include <string>
#include<ctype.h>
using std::string;
class Parse {
private:
	string s;
public:
	Parse() = default;
	Parse(string x) {
		s = x;
	}

	int getFirst() {
		int i = 0;
		while (!isdigit(s[i])) {
			i++;
		}
		string s1 = s.substr(i);
		return stoi(s1);

	}

	int getLast() {
		int i = s.find_first_of('-');
		string s2 = s.substr(i + 1);
		return stoi(s2);
	}
};






int main() {
	std::string s{};
	std::cin >> s;  // 用户输入一个范围字符串
	Parse p(s);     // 构造Parse对象p，同时解析字符串 s
	std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
	return 0;
}