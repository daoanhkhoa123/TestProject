#include <iostream>

int main(){
    double x = (int) 3.14;
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
     
    std::string name;
    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // delete whitespace
    std::cout << "What's your age?: ";
    int age; 
    std::cin >> age;
    std::cout << age << "\n";
    std::cout << name<< "%\n";
    std::cout << name << " is " << age << " years old!\n"; 

    int z = std::max(3, 4);
    std::cout <<z;



}

