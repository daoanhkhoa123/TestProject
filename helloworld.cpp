#include <iostream> 

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    /* this is a multiline comment
    second lone
    third line
    */

    // integer

    
    // float, number with decimal
    double y = 6.5;
    
    // single character
    char  grade = 'a';
    
    // boolean
    bool isOrphan = true;
    
    // string
    std::string name = "Bro";
    std::cout << "Hello " << name << "\n";
    
    // constant
    const double PI = 3.14;
    const double RADIUS = 10;
    double circumference = 2 * PI * RADIUS;
    std::cout << circumference<< "\n";
    
    //namespace
    int x= 0; // this declare the local x = 5
    std::cout << x<< "\n";
    std::cout << second::x<<"\n"; // this uses the x
                                // from the second namespace
    // 0 - the local x
    // 2 - the x of second namespace
    
    using namespace first;
    std::cout << x << "\n";
    using namespace second;
    std::cout << x << "\n";

    /* if we use namespace but the local 
    variable is already declared,
    then the local value will be used
    x = 0, not 1 or 2*/
    
    return 0;
}

