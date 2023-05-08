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
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirst() << ' ' << p.getLast(); // �м���������������������һ���ո��ַ�
	return 0;
}