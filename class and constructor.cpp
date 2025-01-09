#include <iostream>

using std::string, std::cout, std::cin;

class Human{

    public:
        string name;
        // string occupation;
        int age;

        void ear(){
            cout << "eating...\n";
        }
        void drink(){
            cout << "drinking..\n";
        }
        void sleep(){
            cout << "sleeping...\n";
        }
    Human(string name, int age){ // constructorconstructor
        this->name = name;
        this->age = age;
    }
};


int main(){
    
    Human human2("Phong", 19);
    cout << human2.name;
    cout << human2.age;



    
}