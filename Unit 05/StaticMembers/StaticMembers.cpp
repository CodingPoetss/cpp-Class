#include<iostream>
#include"Square.h"

int Square::numberOfObjects;
int main() {
	Square s1;
	std::cout << s1.getNumberOfObject() << std::endl;
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfObject() << std::endl;
	std::cout << s2.getNumberOfObjectNonStatic() << std::endl;
	//std::cout << Square::getNumberOfObjectNonStatic() << std::endl;
	/*���ھ�̬��Ա�����ֵ�������ķ�ʽ��һ��ͨ���������ӵ�ֱ�ӵ���getter������
	��ʱ����getter�����Ƿ���static���Ͷ���Ӱ�죻����ͨ�������Ƽ�::������getter������
	��ʱ����ʹ��static���������þ�̬��Ա��������ʹ�÷���ͨ���ͺ���*/





	return 0;
}