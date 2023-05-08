#include<iostream>
#include<exception>
#include<stdexcept>
#include<string>

int f();

class MyBadAlloc :public std::bad_alloc {
private:
	int capacity;
	std::string message;
	char const* final ;
public:
	MyBadAlloc(const char* msg, int i)
		:capacity{ i }, message{ msg } {
		std::cout << message + " allocated " + std::to_string(capacity) + " times " << std::endl;
		final == (message + " allocated " + std::to_string(capacity) + " times").c_str();
	}

	char const* what() const override{
		return final;
		//std::string msg = message + " allocated " + std::to_string(capacity) + " times";
		//return msg.c_str();
		//return的是返回后会被销毁的匿名对象，而c_str()函数指向的是该对象的常指针，匿名对象被销毁后指向的内容未知
		//return(message + " allocated " + std::to_string(capacity) + " times ").c_str();
	}

};


int main(int argc,const char** argv) {
	try {
		f();
	}
	catch (const MyBadAlloc& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const std::bad_alloc& e) {
		std::cerr << e.what()<< std::endl;
	}

	return 0;
}




int f() {
	int x{ 0 };
	try {
		for (int i = 0; i < 100; i++) {
			new char[500000000];
			x = i;
		}
	}

	catch (const std::bad_alloc& e) {
		MyBadAlloc mybadalloc(e.what(),x);   
		throw mybadalloc;
	}
	
	try {
		for (int i = 0; i < 100; i++) {
			new char[500000000];
		}
	}
	catch (const std::bad_alloc& e) {
		throw;
	}
}