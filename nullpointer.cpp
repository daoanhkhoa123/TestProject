#include <iostream>

using std::string, std::cout, std::cin;

int main(){
    //pointer
    // & address
    // * dereference
    string name = "bro";
    string *pName= &name;
    // pointer is &name, you cant parse it directly to a var,
    // you need to dereference that address 
    // by using *

    // null pointer = nullptr

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if (pointer == nullptr){
        cout << "still null bro";
    }
    else{
        cout << "not nul this time";
    }


}