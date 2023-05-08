#include <iostream>

int main() {
	// 注意：__cplusplus 开头是连续两个下划线
	if (__cplusplus > 202002L) std::cout << "C++23\n";
	else if (__cplusplus == 202002L) std::cout << "C++20\n";
	else if (__cplusplus == 201703L) std::cout << "C++17\n";
	else if (__cplusplus == 201402L) std::cout << "C++14\n";
	else if (__cplusplus == 201103L) std::cout << "C++11\n";
	else if (__cplusplus == 199711L) std::cout << "C++98\n";
	else std::cout << "pre-standard C++\n";

	std::cout << "Press ANY key to exit.";
	std::cin.get();

	return (0);
}