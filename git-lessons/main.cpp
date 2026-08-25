#include <iostream>

int main(){
    std::cout << "HEllo World" << std::endl;
    std::cout << "Hello World2\n";
    std::cout << sizeof(int); //4

    int a = 5;
    int b = 3;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    std::cout << "a & b =" << (a & b) << "(And)\n";
    std::cout << "a | b =" << (a | b) << "(Or)\n";
    std::cout << "a ^ b = " << (a ^ b) << "(Exclusive Or)\n";
    std::cout << "~ a = " << (~a) << "(Inversion)\n";

    std::cout << "-a = " << (-a) << "(Unary Minus)\n";
    std::cout << "+a = " << (+a) << "(Unary Plus)\n";

    int c(6);
    int d{7};
    int e = {8};

    std::cout << c << d << e << "\n";
    
    return 0;
}