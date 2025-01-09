#include <iostream>

int main(){

    double gpa = 2.5;
    // you can find the python len() == sizeof(array)/sizeof(element) = num of elements
    std::cout << sizeof(gpa) << " bytes\n";

    std::string name = "Phong";
    std::cout << sizeof(name) << " bytes\n";
    return 0;
}