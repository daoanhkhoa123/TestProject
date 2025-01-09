#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using std::string, std::cout, std::cin;

int main(){
    //quiz game

    string questions[] = {"1. What is hello in JPD?: ",
                           "2. What is cat in JPD?: "};
    string options[][5] = {{
        "A. neko", "B. jinja", "C. i dont know", "D. Herro?", "d"
    }, {
        "A. neko", "B. not know", "C. inu", "D. whatever", "a"
    }};
    cout << "****QUIZ GAME****\n";
    for (int j = 0; j < 2; j++){
        cout << questions[j] << "\n";
        for (int i = 0; i < 4; i++){
            cout << options[j][i] << "\n";
        }
        cout << "What's your answer?: ";
        string answer;
        cin >> answer;
        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        if (answer == options[j][4]){
            cout << "Youre correct!\n";
        }
        else{
            cout << "No bitch\n";
        } 
        
    }
}