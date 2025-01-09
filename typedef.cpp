#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>>pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
// using is better then typedef
int main(){
    text_t firstName = "Bro";
    std::cout << firstName << "\n";
    number_t age = 21;
    std::cout << "your age: " << age << "\n";
    

    // arithmetic
    int students = 20;
    students += 1;
    students = students + 1;
    students++;
    students--;
    students-=1;
    students*=2;
    students/=2;
    std::cout << students << "\n";
    int remainder = students % 3;

    std::cout << remainder <<"\n"; 

    return 0;
}