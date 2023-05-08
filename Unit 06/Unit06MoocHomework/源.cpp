#include <iostream>
#include<vector>

class Animal {
public:
	static int AliveNumber;
	Animal() {
		std::cout << "Animal" << std::endl;
		AliveNumber++;
	}
	~Animal() {
		AliveNumber--;
	}

	static int getAliveNumber() { return AliveNumber; }
};

class Dog :public Animal {
public:
	Dog() {
		std::cout << "Dog" << std::endl;
	}

};

int Animal::AliveNumber{ 0 };

int main() {

	int N{ 0 };
	std::cin >> N;
	std::vector<Animal*> v1;
	std::vector<Dog*>v2;
	for (int i = 0; i < N; i++) {
		v1.push_back(new Animal);
		v2.push_back(new Dog);
		std::cout << Dog::getAliveNumber() << std::endl;
	}

	for (int i = 0; i < N; i++) {
		delete v1[i];
		delete v2[i];
		std::cout << Dog::getAliveNumber() << std::endl;
	}

	return 0;
}
