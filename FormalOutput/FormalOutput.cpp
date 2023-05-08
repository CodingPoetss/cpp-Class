#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

int main() {

	//一、展示setw和setfill函数
	cout << std::setw(4) << std::setfill('#') << 'a' << endl;


	for (int i = 0; i < 5; i++) {
		cout << std::setw(i + 2) << '\n';
	}


	//二、展示setprecision fixed showpoint left right
	double pi = 3.14159265358979323846;

	cout << std::setprecision(6) << pi << endl;                   //保留6位有效数字
	cout << std::setprecision(6) << std::fixed << pi << endl;     //保留小数点后6位数字

	cout << std::setw(20) << std::left << pi << endl;        //左对齐
	cout << std::setw(20) << std::right << pi << endl;       //右对齐

	//三、展示hexfloat
	double y = 3.0;
	cout << std::hexfloat << y << endl;         //转为十六进制
	cout << std::defaultfloat;                  //去掉小数点后，仅保留整数
	cout << y << endl;
	cout << std::showpoint << y << endl;
	return 0;
}
