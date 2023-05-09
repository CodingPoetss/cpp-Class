#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include<stdexcept>

using namespace std;

class MyComplex {
private:
    double a{};
    double b{};
public:
    MyComplex(){}
    MyComplex(double a_,double b_):a{a_},b{b_}{}
    MyComplex& operator+(const MyComplex& c) {
        double first=a + c.a;
        double second=b + c.b;
        return *(new MyComplex(first, second));
    }
    MyComplex& operator-(const MyComplex& c) {
        double first = a - c.a;
        double second = b - c.b;
        return *(new MyComplex(first, second));
    }
    MyComplex& operator*(const MyComplex& m) {
        double c = m.a;
        double d = m.b;
        double first = a*c-b*d;
        double second = b*c+a*d;
        return *(new MyComplex(first,second));
    }
    MyComplex& operator/(const MyComplex & m) {
        double c = m.a;
        double d = m.b;
        if (std::abs(c) < 1e-9 && std::abs(d) < 1e-9) {
            throw runtime_error("Divisor is 0");
        }
        double first = (a * c + b * d) / (c * c + d * d);
        double second = (b * c - a * d) / (c * c + d * d);
        return *(new MyComplex(first, second));       
        
    }
    double getA() { return a; }
    double getB() { return b; }
    friend std::istream& operator >> (std::istream& in, MyComplex& c) {
        in >> c.a >> c.b;
        return in;
    }
    friend std::ostream& operator << (std::ostream& out, MyComplex& c) {
        out << '(';
        out.unsetf(std::ios::showpos);
        out << c.a;
        out.setf(std::ios::showpos);
        out << c.b;
        out << "i)";
        return out;
    }
};



int main() {
    MyComplex z1, z2;
    std::cin >> z1;
    std::cin >> z2;
    try {
        std::cout << "z1 + z2 = " << z1 + z2 << std::endl;
        std::cout << "z1 - z2 + z1 = " << z1 - z2 + z1 << std::endl;
        std::cout << "z1 * z2 - z1 = " << z1 * z2 - z1 << std::endl;
        std::cout << "z1 / z2 + z1 = ";
        std::cout << z1 / z2 + z1 << std::endl;
        // ����䲻������һ�����һ��
        // �����쳣ʱ�������Ϣ������ϵͳ��ʵ��
        if (!(std::abs(z1.getA()) < 1e-9 && std::abs(z1.getB()) < 1e-9)){
        std::cout << "z2 - z1 / z1 = "; 
        }
        std::cout << z2 - z1 / z1 << std::endl;
        std::cout << "Finished";
    }


    catch (exception& e) {  // catch�����쳣���ͣ�Ҳ���Բ��������쳣
        std::cout << e.what()
            << std::endl;  // what()������������쳣�����е���Ϣȡ����
        std::cout << "Unexpected Error";
    }

    // GCC��VC�������ڵ���ģʽ�»���ͣ�����ڲ鿴���н��
#if (defined(__DEBUG__) || defined(_DEBUG))
    std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cin.get();
#endif
    return 0;
}