#include <iostream>

int main(){
    std::string name = "phong";
    name.insert(0, "van "); // insert at 0th
    std::cout << name << "\n";
    name.erase(0, 4); //erase the first 4 chars
    std::cout << name << "\n";
    std::cout << name.find('p') << "\n";
    
    // while loop
    std::string human;
    int i = 0;
    while(human.empty() && i<3){//repeat 3 times
        std::cout << "Please enter your name: ";
        std::getline(std::cin, human);
        i++;
    }
    std::cout << "Your name is "<< human << "\n";
    // do while: do this, then check if while is true
    do{
        std::cout << "Enter your name: ";
        std::getline(std::cin, human);
    }while(human.empty());
}