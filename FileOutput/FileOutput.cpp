#include<iostream>
#include<filesystem>
#include<fstream>
using std::cout;
using std::endl;
//using std::ifstream;
using std::ofstream;

namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ofstream output { p };

	double lileScore{ 90.5 };
	int hanmeimeiScore{ 84 };

	output << "LiLei " << lileScore << endl;
	output << "HanMeiMei " << hanmeimeiScore << endl;

	output.close();

	cout << "size of " << p << "is: " << fs::file_size(p) << endl;
	return 0;

}