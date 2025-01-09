#include <iostream>

using std::string, std::cout, std::cin;

std::pair<string, string> swap(string x, string y){
    string temp;
    temp = x;
    x = y;
    y = temp;
    return std::make_pair(x, y);
}
void referenceSwap (string& x, string& y){
    string temp;
    temp = x;
    x = y;
    y = temp;

}
int main(){
    //memory address

    string name = "bro";
    int age = 31;
    bool student = true;

    std::cout << &name << "\n"; 

    // pass by value and pass by reference

    string x = "old", y = "new";
    std::pair<string, string> result = swap(x, y);
    x = result.first;
    y = result.second;
    cout << x << " " << y;
    referenceSwap(x, y);
    cout << x << " " << y;
    }