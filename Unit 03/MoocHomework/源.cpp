#include<iostream>
#include<limits>
using std::cout;
using std::endl;

char min(char c1, char c2) {
	return c1 > c2 ? c2 : c1;
}
char min(char c1, char c2, char c3) {
	return min(c1, c2) > c3 ? c3 : min(c1, c2);
}
int min(int i1, int i2) {
	return i1 > i2 ? i2 : i1;
}
int min(int i1, int i2, int i3) {
	return min(i1, i2) > i3 ? i3 : min(i1, i2);
}

int main() {
	cout << min('l', 'N');
	cout <<' '<< min('G', '9', '*');
	cout << ' ' << min(-42,0);
	cout << ' ' << min(42,0,std::numeric_limits<int>::min());
	return 0;
}

