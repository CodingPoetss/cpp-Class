#include<iostream>

namespace NS1 {

	int x{ 1 };
}

namespace NS2 {

	int x{ 2 };
}

int main() {

	using std::cout;
	using std::endl;
	cout << NS1::x << endl;
	cout << NS2::x;
	return 0;
}