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

	//创建二进制输出流
	std::ofstream out{ p,io::out | io::app |io::binary};

	//判断流是否打开
	if (out.fail()) {
		cout << "Can't open file " << p << endl;
	}

	//将整数数组内容输出到二进制文件中
	std::array a{ 21L,42L,63L };
	std::streamsize size = a.size() * sizeof(a[0]);
	out.write(reinterpret_cast<char*>(&a), size);        //默认是常规文件，手动转化为二进制类型

	//以读取模式重新打开二进制文件，或将光标定位到文件头
	out.close();
	std::ifstream in{ p,io::in };


	//从二进制流中读入一个整数并显示到屏幕上

	
	//仅输出第一个数
	
	/*auto x{ 0L };
	in.read(reinterpret_cast<char*>(&x), sizeof(x));
	cout << x << endl;
	*/
	


	//输出整个数组
	std::array<long, 6> b;
	//读整个数组
	in.read(reinterpret_cast<char*>(&b[0]), sizeof(b));

	for (auto it : b) {
		cout << it << ' ';
	}
	

	return 0;
}