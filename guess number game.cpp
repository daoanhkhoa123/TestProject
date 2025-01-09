#include <iostream>
#include <ctime>

int main(){
    // guessing number game
    srand(time(NULL));
    const int maxGuessCount = 3;
    int guessCount;
    const int score = 10;
    int playerScore = 0;
    int num; // random num from 1 to 10
    bool breakState, correctState = false;
    int guess;

    std::cout << "****GUESS FROM 1 TO 6****:\n";
    while(true){
        num = rand() % 6 +1;
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guessCount =1;
        while (guessCount < maxGuessCount){
            if (guess == num){
                playerScore += score;
                correctState = true;
                std::cout << "Correct, now your score is: "<<playerScore<<"\n";
                break;
            }
            else{
                std::cout << "Incorrect, you have "<<maxGuessCount - guessCount << " left!\n";
                std::cout << "Guess again: ";
                std::cin >> guess;
                guessCount += 1;
            }
        }
        if (!correctState){
            std::cout << "The number was: "<< num << "\n";
        }
        
        std::cout << "Would you like to continue? (0 for yes, 1 for no): ";
        std::cin >> breakState;
        if (breakState){
            breakState = false;
            break;
        }
        else{
            continue;
        }
    }

}