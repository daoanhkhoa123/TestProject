#include <iostream>

int main(){
    // array of same datatype
    // array is static size
    // you can reassign values to array

    std::string car[] = {"Convette", "Mustang", "Canny"};

    car[0] = "Hello";

    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    for (int i = 0; i <=2; i++){
        std::cout << car[i] << ": " << prices[i] << "\n";
    }
}