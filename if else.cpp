#include <iostream>
#include <cmath>
int main(){
    double z;
    z = std::max(3,4);
    z = std::min(3, 4);
    z = pow(2, 3);
    z = abs(3);
    z = round(3.4);
    z = ceil(3.4);
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age>=18){
        std::cout << "Your age is ok\n";
    }
    else if(age < 0){
        std::cout << "you havent been born yet";
    }
    else{
        std::cout << "You are not old enough to enter";
    }


}