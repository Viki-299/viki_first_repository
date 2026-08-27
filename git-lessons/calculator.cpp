#include <iostream>


double add (double a, double b){
        return a + b;
    }
double subtract (double a, double b){
        return a - b;
    }
double multiply (double a, double b){
        return a * b;
    }
double divie (double a, double b){
        return a / b;
    }

int main(){

    double a;
    std::cout << "Write x" << std::endl;
    std::cin >> a;
    double b;
    std::cout << "Write y" << std::endl;
    std::cin >> b;
    char o;
    std::cout << "Chouse the operation: - + * /" << std::endl;
    std::cin >> o;

    

    if (o == '+'){
        double sum = add(a, b);
        std::cout << sum << std::endl;
    }
    else if (o == '-'){
        double difference = subtract(a, b);
        std::cout << difference << std::endl;
    }
    else if (o == '*'){
        double product = multiply(a, b);
        std::cout << product << std::endl;
    }
    else if (o == '/'){
        if (b == 0){
            std::cout << "Error" << std::endl;
        } else if (b != 0){
            double quotient = divie(a, b);
            std::cout << quotient << std::endl;
        }
        
    }
    

    
            

    return 0;
    
    }






}

