#include <iostream>

int main(){
        int rows = -1;
        do{
                std::cout << "How many times do you want this to iterate?: ";
                std::cin >> rows;
        }while(rows <= 0);
        int cols = -1;
        do{
                std::cout << "How many columns do you want?: ";
                std::cin >> cols;
        }while(cols <= 0);
        // only print out even num from 1 to cols rows-times:
        for (int i = 1; i <= rows; i++){
                for (int j = 1; j <= cols; j++){
                        if (j % 2 == 0){
                                std::cout << j << " ";

                        }
                        else{
                                continue;
                        }
                }
                std::cout<< "\n";
        }


}