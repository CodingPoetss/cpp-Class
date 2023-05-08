#include<iostream>
#include<filesystem>
#include<fstream>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
namespace fs = std::filesystem;

int main() {

	using fo = std::ios;

	fs::path p1{ "city1.txt" }, p2{ "city2.txt" };
	
	//������������ļ������ֱ�Ϊapp��truncģʽ
	ofstream out1{ p1,std::ios::out | std::ios::app };      //׷��ģʽ
	ofstream out2{ p2,std::ios::out | std::ios::trunc };    //��дģʽ

	//�Ӽ��̶����ַ�������������ļ�����
	char c;
	while (!std::cin.get(c).eof()) {       //cin.get()��get()�������ǣ�ǰ���ǴӼ��������ж��룬�������Ǵ��ļ��ж���
		out1.put(c);
		out2.put(c);
	}

	//�ر����������
	out1.close();
	out2.close();


	//��(���ļ�)���������ļ���������һ��ʹ��ateģʽ
	std::fstream in1{ p1,fo::in };
	std::fstream in2{ p2,fo::in | fo::ate };

	//��������ļ�������
	cout << p1 << endl;
	while (!in1.get(c).eof()) {
		cout << c;
	}
	cout << p2 << endl;
	while (!in2.get(c).eof()) {
		cout << c;
	}
	
	//�ر�IO�ļ���
	in1.close();
	in2.close();

	return 0;
}