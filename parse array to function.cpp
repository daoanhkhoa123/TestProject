#include <iostream>
double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i<size; i++){
        total += prices[i];
    }
    return total;
}

int arrayFind(int numbers[],int size, int element){
    for(int i = 0; i< size; i++){
        if (numbers[i] == element){
            return i;
        }
    };
    return -1;

}
int main(){

    double prices[] = {1, 2, 3, 4, 5};
    int numbers[] = {1, 2, 3, 4, 5};

    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" <<total << "\n";
    std::cout << arrayFind(numbers, size, 7);
}