#include<iostream>

class StackOfIntegers
{
private:
	int elements[100];
	int size{ 0 };

public:
	StackOfIntegers() {
		size = 0;
		for (int& i : elements) {
			i = 0;
		}
	}
;
	bool empty() {
		return size == 0 ? true : false;
	}

	int getSize() { return size; }

	int peek() { return elements[size - 1]; }

	int pop() {
		int temp = elements[size - 1];
		elements[size - 1] = 0;
		size--;
		return temp;
	}

	int push(int value) {
		elements[size] = value;
		size++;
		return value;
	}

};


int main() {
	StackOfIntegers s1;
	for (int i = 0; i < 5; i++) {		//µ× 1 2 3 4 5 ¶¥
		s1.push(i);
	}

	std::cout << "Stack size is:" << s1.getSize() << std::endl;
	std::cout << "Top element is:" << s1.peek() << std::endl;

	const int size = s1.getSize();
	for (int i = 0; i < size; i++) {
		std::cout << s1.pop() << " ";
	}

	std::cout <<std::endl<< "Stack now is:" << s1.empty() << std::endl;

	return 0;
}
