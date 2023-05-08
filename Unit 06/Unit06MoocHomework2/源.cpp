#include<iostream>
#include<vector>
using namespace std;

class Animal {
public:
	Animal() { cout << "Animal" << endl; }
	virtual void speak() = 0;
};

class Dog :public Animal{
public:
	Dog() { cout << "Dog" << endl; }
	void speak()override { cout << "wang" << endl; }
};

class Cat :public Animal {
public:
	Cat() { cout << "Cat" << endl; }
	void speak()override { cout << "miao" << endl; }
};

int main() {
	int N{ 0 };
	vector<Animal*>v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		v.push_back(new Dog{});
		v.push_back(new Cat{});
	}

	for (auto x : v) {
		x->speak();
		delete x;
	}


}