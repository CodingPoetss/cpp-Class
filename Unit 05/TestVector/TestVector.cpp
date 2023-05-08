#include <vector>
#include <string>
#include <iostream>
#include"��ͷ.h"
using std::string;
using std::vector;

int main() {
	//��ʼ��������vector
	vector<string> words1{ "Hello","world!" };
	PRINT(words1);
	
	//ɾ�����һ��Ԫ��
	words1.erase(words1.end() - 1);
	PRINT(words1);

	//β��׷��Ԫ��
	words1.push_back("emmmm");
	PRINT(words1);

	//�õ���������word1��words2
	vector words2(words1.begin()+1, words1.end());            //c++17�������¶���������
	PRINT(words2);

	//��words2�в���Ԫ��(�ǲ��뵽ָ��λ��֮ǰ)
	words2.insert(words2.begin(), "Hello!");
	PRINT(words2);

	//��������ķ�ʽ����word3
	vector words3(words2);
	PRINT(words3);

	//���±���޸�Ԫ��
	words3[1] = "cpp";
	PRINT(words3);

	//��������ʼ���������ͬԪ�ص�vector
	vector<string> words4(5, "python");
	PRINT(words4);

	//����
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);
	return 0;
}