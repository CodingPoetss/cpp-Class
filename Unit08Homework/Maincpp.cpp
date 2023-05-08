#include<iostream>
#include"MyComplex.h"
using std::cout;
using std::endl;
int main() {
	MyComplex c1{ 2,3 };
	MyComplex c2{ -3,-2 };
	MyComplex c3{ 7,6 };

	cout << "c1 is:" << c1.toString() << endl;
	cout << "c2 is:" << c2.toString() << endl;
	cout << "c3 is:" << c3.toString() << endl;

	MyComplex c4 = c1 + c2;
	c3 += c2 += c1;
	cout << "c2 is:" << c2.toString() << endl;
	cout << "c3 is:" << c3.toString() << endl;
	cout << "c4 is:" << c4.toString() << endl;

	cout << "c1[0] is:" << c1[0] << endl;
	cout << "c1[1] is:" << c1[1] << endl;
	//cout << "c1[2] is:" << c1[2] << endl;

	MyComplex c5 = ++c1;
	MyComplex c6 = c4++;
	cout << "c5 is:" << c5.toString() << endl;
	cout << "c6 is:" << c6.toString() << endl;
	cout << "c1 is:" << c1.toString() << endl;
	cout << "c4 is:" << c4.toString() << endl;


	MyComplex c7 = c6;
	cout << c7 << endl;

	MyComplex c8 = c6 * c7;
	MyComplex c9 = c6 * 10;
	MyComplex c10 = 10 * c6;

	cout << "c8 is:" << c8 << endl;
	cout << "c9 is:" << c9<< endl;
	cout << "c10 is:" << c10<< endl;
	return 0;
}