#pragma once
template <typename T>
class Array {
private:
	T* a;
	int len;
public:
	Array(T* a, int len);
	auto sum();
	auto reverse();
	auto seek();
	auto print();


};
