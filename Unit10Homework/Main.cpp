#include<iostream>
#include<array>
#include<string>
using std::array;
using std::cout;
using std::endl;
const int LEN = 10;

template <typename T>
T& multiply(T op1, T op2) {
	T* it= new T{ op1 * op2 };
	return *it;
}

template <typename T>
auto* reverse(std::array<T,LEN>& a) {
	int left = 0, right = LEN-1;
	while (left <= right) {
		T temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++; right--;
	}
	return &a;
}


template <typename T>
void print(std::array<T, LEN> a) {
	for (auto it : a) {
		std::cout << it << " ";
	}
	std::cout << '\n';
}


template <class T>
class Array {
private:
	T* a;
	int len;
public:
	Array(T* a, int len) :a{ a }, len{ len }{};
	int sum() {
		T sum{};
		for (int i = 0; i < len; i++) {
			sum += a[i];
		}
		return sum;
	}
	auto reverse() {
		int left = 0, right = len - 1;
		while (left <= right) {
			T temp = a[left];
			a[left] = a[right];
			a[right] = temp;
			left++; right--;
		}
		return a;
	}
	bool seek(T key) {
		bool found = false;
		for (int i = 0; i < len; i++) {
			if (a[i] == key) {
				found = true;
				break;
			}
		}
		return found;
	}
	void print() {
		for (int i = 0; i < len;i++) {
			std::cout << a[i] << " ";
		}
		std::cout << '\n';
	}


};


//实例化int类型
//template auto multiply<int>(int& x,int& y)
int main() {

	int a{ 2 }, b{ 3 }, c{ 4 };
	std::cout << multiply(multiply(a, b), c) << std::endl;
	array<int, LEN> t{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	array<std::string, LEN> m{ "蝉鸣隐密树","鸟戏拂馀花","连山带石耸","曲径绕峰斜","正见当垆女","红妆二八年",};
	array<char, LEN> n{ 'a','b','c','d','e','f','g','h','i','j' };
	std::cout << "Before reversing:" << std::endl;
	print(m);
	print(n);
	std::cout << "After reversing:" << std::endl;
	print(*reverse(m));
	print(*reverse(n));

	
	array<int, 5>g = { 1,2,3,4,5 };
	Array<int> arr(g.data(), g.size());
	std::cout << "Before reversing:" << std::endl;
	arr.print();
	std::cout << "After reversing:" << std::endl;
	arr.reverse();
	arr.print();
	cout << "sum : " << arr.sum() << endl;
	cout << "arr.seek(3) " << arr.seek(3) << endl;
	cout << "arr.seek(6) " << arr.seek(6) << endl;
	return 0;
	
	return 0;
}