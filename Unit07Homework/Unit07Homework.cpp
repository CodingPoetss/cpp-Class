#include<iostream>
#include<filesystem>
#include<fstream>
#include<string>
#include<vector>
#include<array>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	fs::path p1{ "out.txt" }, p2{ "014.json" };
	std::ofstream out{ p1,std::ios::out|std::ios::trunc };
	std::ifstream in{ p2 };

	/*
	if (fs::exists(p2)) {
		cout << p2 << " exist." << endl;
	}

	else{
		cout << p2 << " does not exist." << endl;
		return 0;
	}
	*/

	std::error_code ec;
	std::uintmax_t size0 = fs::file_size(p2, ec);
	double size_double = size0/1.0;
	int size_int = size0 / 1;
	std::array<std::string, 3> poetry{ "Beijing","Chongqing","Qingdao" };
	std::streamsize size = sizeof(poetry[0]) * poetry.size();

/*
	if (ec) {
		std::cout << "Error: " << ec.message() << "\n";
	}
	else {
		std::cout << "The file " << p2.filename() << " occupies " << std::fixed
			<< std::setprecision(6) << size << " GigaBytes\n";
	}

	
	for (int i = 1; i <= 5; i++) {
		out << std::setprecision(i) << std::setfill('*') << std::setw(i + 4) << size << endl;
	}

*/
	fs::path p3{ "inout.dat" };
	std::fstream outdat{ p3,std::ios::in | std::ios::out | std::ios::binary };
	outdat.write(reinterpret_cast<char*>(&size_int), sizeof(size_int));
	outdat.write(reinterpret_cast<char*>(&size_double), sizeof(size_double));
	outdat.write(reinterpret_cast<char*>(&poetry[0]), size);

	outdat.close();
	

	std::fstream fordat{ p3,std::ios::in | std::ios::out | std::ios::binary };
	double newvalue = 1.0;
	fordat.seekg(sizeof(int), std::ios::beg);
	fordat.write(reinterpret_cast<char*>(&newvalue),sizeof(newvalue));
	
	fordat.close();
	std::ifstream indat{ p3,std::ios::in };

	int x{}; double y{}; std::array<std::string, 3> z;
	indat.read(reinterpret_cast<char*>(&x), sizeof(x));
	indat.read(reinterpret_cast<char*>(&y), sizeof(y));
	indat.read(reinterpret_cast<char*>(&z[0]), size);

	cout << x << ' ' << y << endl;
	for (auto i : z) {
		cout << i << ' ';
	}


	indat.close();

	
	std::fstream forpoem(p3, std::ios::in | std::ios::binary);
	std::string poem{"zzz"};
	forpoem.seekp(-size, std::ios::end);
	forpoem.read(reinterpret_cast<char*>(&poem[0]), sizeof(poem));
	cout << poetry[1] << endl;

/*

	std::ofstream rewrite{ p3,std::ios::out | std::ios::binary | std::ios::trunc };

	rewrite.seekp(sizeof(x),std::ios::beg);
	double m{ 1.0 };
	rewrite.write(reinterpret_cast<char*>(&m), sizeof(m));

	rewrite.close();
	std::ifstream reread{ p3,std::ios::in };

	int n1{}; double n2{}; std::array<std::string, 3> n3;
	reread.read(reinterpret_cast<char*>(&n1), sizeof(n1));
	reread.read(reinterpret_cast<char*>(&n2), sizeof(n2));
	reread.read(reinterpret_cast<char*>(&n3), size);

	cout << n1 << ' ' << n2 << endl;
	for (auto i : n3) {
		cout << i << ' ';
	}

*/

/*

	std::vector<char> poem;
	char s{};
	while (!in.get(s).eof()) {
		poem.push_back(s);
	}
	
	out.close();
	out.open(p1);
	

	for (auto i : poem) {
		out.put(i);
	}

*/
	return 0;
}
