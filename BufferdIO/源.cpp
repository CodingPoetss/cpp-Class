#include<iostream>

int main() {

	// �õ�cin����Ļ�����ָ��
	auto p = std::cin.rdbuf();

	//�Ӽ��̶����ַ��������������������ַ��ڻ�����
	//auto x = std::cin.peek();
	auto x = std::cin.get();                        /*cin.peek()��cin.get()��������:peek��������� << ��ȡ����Ȼ�ɱ����ڻ�������
													��get�����������ȡ��ͻᱻɾ����ʧ*/

	std::cout << "x = " << x << std::endl;

	//��ʾ���������ַ�����
	auto count = p->in_avail();
	std::cout << "There are " << count << " characters in the buffer." << std::endl;

	//��ʾ���������ַ�
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << ":" << std::cin.get() << std::endl;
	}

	return 0;
}