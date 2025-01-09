#include <iostream>
#include <ctime>

int main(){
    //random number 
    srand(time(NULL)); // parse system time >> seed
    // seed >> make sure the numbers are random each run

    int num = rand() % 6; // ( 0 ->>  very large ) modular 6
    
    // std::cout << num;
    // random event generator with random and switch
    int x = 0, y = 0;
    int times = -1;
    do{
        std::cout << "Enter the number of moves: ";
        std::cin >> times;
    }while(times<=0);

    for(int i = 1; i<=times;i++){

        num = rand() % 4 + 1; // four moves
        switch (num){
            case 1:
                y += 1;
                std::cout << "Random move: W, now your current" 
                        << "coordinates are (" <<x<<", "<<y<<")\n";
                break;
            case 2:
                y -= 1;
                std::cout << "Random move: S, now your current "
                            <<"coordinates are (" <<x<<", "<<y<<")\n";
                break;
            case 3:
                x+=1;
                std::cout << "Random move: D, now your current "
                            << "coordinates are (" <<x<<", "<<y<<")\n";
                break;                
            case 4:
                x-=1;
                std::cout << "Random move: A, now your current "
                            << "coordinates are (" <<x<<", "<<y<<")\n";
                break; 
        }
    }
}