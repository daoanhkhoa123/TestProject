#include <iostream>
#include <ctime>
// Rock paper scissor

char getUserChoice(){
    char player;
    do{
        std::cout << "r. Rock, p. Paper, s. Scissor.\n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice(){
    char computer;
    int mapComputer = rand() % 3 + 1;
    if (mapComputer == 1){
        return 'r';
    }
    else if (mapComputer == 2){
        return 'p';
    }
    else {
        return 's';
    };
}   
void showChoice(char userChoice, char computerChoice){
    std::cout << "User: " << userChoice<< " vs Computer: " << computerChoice << "\n";
}
std::string chooseWinner(char user, char computer){
    if (user == computer){
        return "Tie\n";
    }
    else if ((user == 'r' && computer == 'p')| (user == 'p' && computer == 's')|(user == 's' && computer == 'r')){
        return "Lose\n";
    } 
    else if ((user == 'r' && computer == 's') | (user == 's' && computer == 'p') | (user == 'p' && computer == 'r')){
        return "Win";
    };
}

int main(){
    int playerScore = 0;
    int op;
    srand(time(NULL));
    do{
        std::cout << "****ROCK PAPER SCISSOR****\n";
        std::cout << "1. Play\n";
        std::cout << "2. View score\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> op;

        if (op == 1){
            char userChoice = getUserChoice();
            char playerChoice = getComputerChoice();
            showChoice(userChoice, playerChoice);
            std::string  winner = chooseWinner(userChoice, playerChoice);
            std::cout <<  winner<< "\n";
            if (winner == "Tie"){
                playerScore += 10;
            }
            else if (winner == "Win"){
                playerScore += 20;
            }
            else {
                playerScore -= 10;
            }
            std::cout << "Your score: " << playerScore << "\n";
        }
        else if(op == 2){
            std::cout << "Playerscore: "<< playerScore <<"\n"; 
        }
        else if (op != 3){
            std::cout << "Please enter a valid choice.\n";
        }
    }while(op!= 3);
}