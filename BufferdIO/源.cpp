#include<iostream>

int main() {

	// 拿到cin对象的缓冲区指针
	auto p = std::cin.rdbuf();

	//从键盘读入字符到缓冲区，保留所有字符在缓冲区
	//auto x = std::cin.peek();
	auto x = std::cin.get();                        /*cin.peek()与cin.get()的区别是:peek输入的数被 << 读取后仍然可保存在缓冲区中
													但get读入的数被读取后就会被删除消失*/

	std::cout << "x = " << x << std::endl;

	//显示缓冲区中字符数量
	auto count = p->in_avail();
	std::cout << "There are " << count << " characters in the buffer." << std::endl;

	//显示缓冲区的字符
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << ":" << std::cin.get() << std::endl;
	}

	return 0;
}