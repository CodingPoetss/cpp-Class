#include<iostream>
#include<filesystem>
#include<fstream>
#include<array>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;


int main() {
	namespace fs = std::filesystem;
	using io = std::ios;

	fs::path p{ "array.dat" };

	//���������������
	std::ofstream out{ p,io::out | io::app |io::binary};

	//�ж����Ƿ��
	if (out.fail()) {
		cout << "Can't open file " << p << endl;
	}

	//��������������������������ļ���
	std::array a{ 21L,42L,63L };
	std::streamsize size = a.size() * sizeof(a[0]);
	out.write(reinterpret_cast<char*>(&a), size);        //Ĭ���ǳ����ļ����ֶ�ת��Ϊ����������

	//�Զ�ȡģʽ���´򿪶������ļ����򽫹�궨λ���ļ�ͷ
	out.close();
	std::ifstream in{ p,io::in };


	//�Ӷ��������ж���һ����������ʾ����Ļ��

	
	//�������һ����
	
	/*auto x{ 0L };
	in.read(reinterpret_cast<char*>(&x), sizeof(x));
	cout << x << endl;
	*/
	


	//�����������
	std::array<long, 6> b;
	//����������
	in.read(reinterpret_cast<char*>(&b[0]), sizeof(b));

	for (auto it : b) {
		cout << it << ' ';
	}
	

	return 0;
}