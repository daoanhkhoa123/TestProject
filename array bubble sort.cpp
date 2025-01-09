#include <iostream>

void bubbleSort(int* numbers, int size){
    while(true){
        bool swapped = false;
        for(int i=0; i<size -1;i++){
            if (numbers[i] > numbers[i+1]){
                int temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
                swapped = true;
            }
        }
        if (swapped==false){
            break;
        }
    }
}

int main(){
    int numbers[] = {3, 5, 2, 4, 6, 4, 7, 8};
    // we use bubble sort this time
    int size = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, size);
    for(int i=0; i<size;i++){
        std::cout << numbers[i] << " ";
    };
}