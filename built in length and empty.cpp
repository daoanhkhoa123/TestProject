#include <iostream>

int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    if (name.length()>12){
        std::cout << "name cant be longer than 12 chars";

    }
    else if (name.empty()){
        std::cout << "name cant be empty";
    }
    else{
        std::cout << "Welcome "<< name;
    }
    name.append("@gmail.com");
    std::cout << "Your name is now "<< name << "\n";
    std::cout << name.at(0);
    // name.clear();
}