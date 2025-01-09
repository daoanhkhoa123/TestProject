#include <iostream>

using std::cout, std::cin, std::string;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "nom nom nom...\n";

    }
};
class Dog : public Animal{ 
    public:
    void bark(){
        cout << "wolfing... \n";
    }

};
class Cat : public Animal{
    public:
    void meow(){
        cout << "meowing...\n";
    }
};

int main(){

    // inheritance


}