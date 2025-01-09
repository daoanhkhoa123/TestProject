#include <iostream>

int main(){
    // convert celcius to farenheit
    double c;
    std::cout<< "Enter celcius value: ";
    std::cin >> c;
    double f = (c*9/5) + 32;
    std::cout<<f;
    
}