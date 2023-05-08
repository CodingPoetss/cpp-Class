#include<iostream>
 
class Square {
	double side = 1.0;
public:
	Square()=default;            //c++11 ǿ�Ʊ���������һ��Ĭ�Ϲ��캯��

	//�ȼ���Square(){};

	Square(double side) {
		this->side = side;
	}
	double getArea() {
		return side * side;
	}
};

int main() {
	Square s1, s2{ 4.0 };
	std::cout << s1.getArea() << std::endl;
	std::cout << s2.getArea() << std::endl;
	return 0;
}