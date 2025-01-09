#include <iostream>

int main(){
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp>0 && temp <30){ // == and
        std::cout<< "The temp is good";
    }
    else{
        std::cout<<"The temp is bad";
    }

    if (temp <=0 || temp >= 30){ // == or
        std::cout<<"The temp is bad";
    }
    bool hungry = true;
    hungry = !hungry; // invert the boolean value
    std::cout<<hungry;

}