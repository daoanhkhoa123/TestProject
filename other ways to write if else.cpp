#include <iostream>

int main(){

    int grade = 75;
    grade >= 60 ? std::cout << "you passed" : std::cout << "You failed";
    std::cout << "\n";
    int number = 9;
    number % 2 == 1? std::cout << "odd" : std::cout << "even";
    std::cout<<"\n";
    bool hungry = true;
    hungry? std::cout << "Hungry":std::cout <<"not hungry";
    std::cout << "\n";
    //other ways to write this:
    std::cout << (hungry? "hungry":"not hungry");
}