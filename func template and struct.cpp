#include <iostream>

using std::string, std::cout, std::cin;
template <typename T, typename C>

auto max(T x, C y){
    return (x, y)? x:y;
}
struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){
    // struct: hold values of different dtypes
    student student1;
    student1.name = "SpongeBob";
    student1.gpa = 3.2;
    student1.enrolled = true;
    cout << student1.name;
}