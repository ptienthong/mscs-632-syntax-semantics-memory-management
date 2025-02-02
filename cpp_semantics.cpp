#include <iostream>

long factorialOf(int number){
    if(number == 0 || number == 1){
        return 1;
    }
    return number * factorialOf(number - 1);
}

std::function<long(int)> factorialClosure = [](int number) -> long {
    if(number == 0 || number == 1){
        return 1;
    }
    return number * factorialOf(number - 1);
};


int main(){

    int number = 0; 
    std::cout << "Factorial of " << number << " is " << factorialOf(number) << '\n';
    
    number = 5;
    std::cout << "Factorial of " << number << " is " << factorialOf(number) << '\n';

    number = 10;
    std::cout << "Factorial of " << number << " is " << factorialOf(number) << '\n';

    number = 15;
    std::cout << "Factorial of " << number << " is " << factorialOf(number) << '\n';
    
    // Using closure object
    auto fact = factorialClosure; 
    std::cout << "Factorial of 5 using closure is " << fact(5) << '\n'; 
    
    return 0;
}