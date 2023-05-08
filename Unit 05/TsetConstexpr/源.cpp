#include<iostream>
#include<array>
#include<algorithm>
#include<cassert>
using std::cout;
using std::endl;
using std::array;
//

constexpr int factorial(int n) {
	if (n == 0) {
		return 1;  //error point
	}
	else {
		return n * factorial(n - 1);
	}


}

int main() {

	int x{ 3 };
	auto f = factorial(x);

	static_assert(factorial(3) == 6, "factorial(3) should be 6");       //是在编译期间就进行断言的
	assert(f == 6);

	array<int, factorial(4)> a;
	cout << a.size();

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	int m = 1;
	const int rcm = m++;
	const int cm = 4;            //等价于constexpr int cm=4;

	array<int,cm>a1;
*/


	return 0;
}