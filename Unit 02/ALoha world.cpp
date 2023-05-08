#include<iostream>

int main() {

	//  cout << "Aloha,world!" << endl;          //end line
	char a;
	while (1) {
		a=std::cin.get();
		std::cout << static_cast<int>(a);
	}
	return 0;
}
