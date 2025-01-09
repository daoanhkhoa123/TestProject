#include <iostream>
using std::string, std::cout, std::cin;
enum Day  {sunday = 0, monday = 1};
// we can also not assign any num to the names,
// if so, ordinal numbering is assigned

int main(){
    // e-num: pair named-integer const:
    // sunday = 0
    Day today = sunday;
    switch(today){  // switch generally only accepts int
                    // so we switch "sunday" to enum sunday = 0
        case sunday:
            cout << "Study at home bitch\n";
            break;
        case monday:
            cout << "Study at school bitch\n";
            break;
    }

}