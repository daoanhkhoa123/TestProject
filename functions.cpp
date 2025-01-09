#include <iostream>
#include <ctime>

// function
void happyBirthday(std::string name){
    std::cout << "Happy Birthday "<< name << "\n";
}
double square(double length){
    return length * length;
}
double volumeOfCube(double width, double height, double length){
    return width * height * length;
}
std::string concatString(std::string string1, std::string string2){
    return string1.append(string2);
    // or return string1 + string2;
}
// function versions
void bakePizza(){
    // version 1 without param
}
void bakePizza(std::string string1){
    // version 2 with param
}
int main(){
    happyBirthday("Bro");
    std::cout << square(3.5) << std::endl;
    std::cout << volumeOfCube(3, 4, 5)<<std::endl;
    std::cout << concatString("Hello ", "Phong");
}