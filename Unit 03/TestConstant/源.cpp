#include<iostream>
#include<typeinfo>
int main() {

	//��ָ��
	int y = 20;
	int z = 30;
	int const x{10};
	int const* p1 = &x;
	p1 = &y;                  //p1���е�����:���Ը���ָ��ĵ�ַ��������ָ���ĸ���ַ�����ܸı�õ�ַ��ֵ


	//ָ�볣��
	int* const p2 = &y;
	*p2 = z;
	//p2 = &z;               //p2���е����ԣ��Ƚ�רһ��һ��ָ��ĳһ��ַ�Ͳ��ܸ��ģ����ǿ��Ժ���ָͨ��һ��ͨ��*�������ı��ַ��ֵ
	std::cout << *p2;

	
	//��ָ�볣��
	const int* const p3 = &y;
	//p3 = &z;
	//*p3 = z;               //p3ͬʱ����p1��p2������



	//�ַ���
	// char* str = "Hello!"; //��֮ǰ��const����˵��""֮�ڵ����ݣ��ǳ��������Ա�*str�ķ�ʽ�ı�
	//*str = 'p';
	const char* str = "Hello!";

	//auto���constҲ�߳�������
	auto const m{ 'z' };
	std::cout << typeid(m).name();
	//m = 'g';

	return 0;
}