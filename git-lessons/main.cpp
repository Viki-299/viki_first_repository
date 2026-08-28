#include <iostream>

int max_element(int arr[], int size){
    int max_dig{0};
    for (int i = 0; i < size; i++){
        if (arr[i] > max_dig){
            max_dig = arr[i];
        }
    } return max_dig;
}

int main(){

    int data[] = {3,7,1,4,9};
    int result = max_element(data, 5);
    std::cout << result << std::endl;




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
    for (int i = 1; i <= 100; ++i){
        std::cout << i << std::endl;
    }
    

    return 0;
}