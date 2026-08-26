#include <iostream>

int main(){

    int x;
    std::cout << "Write x" << std::endl;
    std::cin >> x;
    int y;
    std::cout << "Write y" << std::endl;
    std::cin >> y;
    char o;
    std::cout << "Chouse the operation: - + * /" << std::endl;
    std::cin >> o;

    switch (o){
        case '-':
            std::cout << x - y << std::endl;
        case '+':
            std::cout << x + y << std::endl;
        case '*':
            std::cout << x * y << std::endl;
        case '/':
            if(y == 0){
                std::cout << "Error" << std::endl;
            } else if (y != 0){
                std::cout << x / y << std::endl;
            }

    return 0;
    
    }






}

