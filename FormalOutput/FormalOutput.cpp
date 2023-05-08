#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

int main() {

	//һ��չʾsetw��setfill����
	cout << std::setw(4) << std::setfill('#') << 'a' << endl;


	for (int i = 0; i < 5; i++) {
		cout << std::setw(i + 2) << '\n';
	}


	//����չʾsetprecision fixed showpoint left right
	double pi = 3.14159265358979323846;

	cout << std::setprecision(6) << pi << endl;                   //����6λ��Ч����
	cout << std::setprecision(6) << std::fixed << pi << endl;     //����С�����6λ����

	cout << std::setw(20) << std::left << pi << endl;        //�����
	cout << std::setw(20) << std::right << pi << endl;       //�Ҷ���

	//����չʾhexfloat
	double y = 3.0;
	cout << std::hexfloat << y << endl;         //תΪʮ������
	cout << std::defaultfloat;                  //ȥ��С����󣬽���������
	cout << y << endl;
	cout << std::showpoint << y << endl;
	return 0;
}
