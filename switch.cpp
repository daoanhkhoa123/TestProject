#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month: ";
    std::cin >> month;
    switch(month){
        case 1:
            std::cout << "It's JAn";
            break;
        case 2:
            std::cout << "It's Feb";
            break;
        // ...
        default: // if no match
            std::cout << "Please only enter number 1 - 12";
    }
}