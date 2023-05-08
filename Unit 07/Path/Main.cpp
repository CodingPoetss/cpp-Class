/* 6.	Write programs: 1) Open the file D:\out.txt for writing using ctors of
ofstream; 2) Open the file x.json for reading using ifstream::open();

3) Test if x.json exists. If not, output "x.json does not exist" and quit;
*/
#include <array>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
namespace fs = std::filesystem;    
using namespace std;
int main() {
    std::filesystem::path pi{ "d:/014.json" };
    bool exists = std::filesystem::exists(pi);
    if (exists) {
        std::cout << "The file exists.\n";
    }
    else {
        std::cout << "The file " << pi.filename() << " does not exist.\n ";
        return 0;
    }
    {
        std::error_code ec;
        std::uintmax_t size0 = fs::file_size(pi, ec);
        double size = size0 / 1000000000.0;

        if (ec) {
            std::cout << "Error: " << ec.message() << "\n";
        }
        else {
            std::cout << "The file " << pi.filename() << " occupies " << std::fixed
                << std::setprecision(6) << std::setfill('*') << std::setw(19)
                << size << " GigaBytes\n";
        }
    }

    // open the file with ostream's ctor
    fs::path po{ R"(D:\out.txt)" };
    std::ofstream ofs(po);

    std::ifstream ifs(pi);  // open 014.json

    std::vector<std::string> v;
    while (!ifs.eof()) {
        char s[1000];
        ifs.getline(&s[0], 999);
        v.push_back(s);
    }

    std::cout << "There are " << v.size() << " lines in " << pi.filename()
        << std::endl;

    for (size_t i = 200; i < 220; i++) {
        std::cout << v[i] << std::endl;
    }

    return 0;
}