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
     
    std::cout << (c - d) << std::endl;
    if (c < d){
        std::cout << c   << "less than" << d   << std::endl;
    }  else if (c > d){
            std::cout << c << "Bigger than" << d << std::endl;
        }
    
    std::cout << c << d << e << "\n";
    bool sth{true};
    std::cout << sth << std::endl; //1
    
    //first little programm
    int x;
    std::cout << "Write your number" << "\n";
    std::cin >> x;
    if (x > 0){
        std::cout << "Positive" << std::endl;
    } else if (x < 0){
        std::cout << "Negative" << std::endl;
    } else if (x == 0){
        std::cout << "Zero" << std::endl;
    }
    //second little programm
    
    
    
    
    return 0;
}