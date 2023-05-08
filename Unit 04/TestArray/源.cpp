#include<iostream>
#include<array>
#include<algorithm>
using std::cout;
using std::endl;
using std::array;

void print(auto a) {
	for (auto x : a)
		cout << x << " ";
}

int search(array<int, 3>& a, int token) {
	bool exist{ false };
	int i = 0;
	for (auto element : a) {
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist) { return i; }
	else { return -1; }

}


int main() {
	//1.��������
	array a1{ 1,2,4 };
	//print(a1); cout << endl;

	//2.Ϊ���鸳ֵ
	a1 = { 7,8,9 };
	//print(a1); cout << endl;

	//3.��������
	array b1{ 100,200,300 };
	print(a1); cout << endl;
	print(b1); cout << endl;
	a1.swap(b1);
	print(a1); cout << endl;
	print(b1); cout << endl;

	//4.�������С
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;
	
	//5.��дsearch�������������в���һ��ֵ
	cout << "search 300:" << search(a1,300) << endl;
	cout << "search 1:" << search(a1,1) << endl;

	//6.sort����
	std::sort(a1.begin(), a1.end());
	print(a1);

	//7.��ά����
	array<array<int, 3>, 4> a8;       //�������еĶ�ά����

	return 0;
}