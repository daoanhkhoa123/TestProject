#include <iostream>

int main(){
    char op;
    double num1, num2, result;

    std::cout << "*******CALCULATOR*********\n";

    std::cout << "Enter either (+ - * /): ";
    std:: cin >> op;

    std::cout << "Enter num1: ";
    std::cin >> num1;

    std::cout <<"Enter num2: ";
    std::cin >> num2;
    switch(op){
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2; 
            break;
        case '/':
            std::cout << num1/num2;
            break;
        default:
        std::cout<< "Please enter a valid operation: ";
    }   


}