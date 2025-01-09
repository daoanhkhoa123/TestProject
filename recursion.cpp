#include <iostream>

using std::string, std::cout, std::cin;

int factorial(int num){
    if(num == 1  || num == 0){
        return 0;
    }
    int result = 1;
    for (int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

int recursiveFactorial(int num){
    if (num>1){
        return num * recursiveFactorial(num-1);
    }
    else{
        return 1;
    }
}

int main(){
    // recursion
    cout << recursiveFactorial(3);
}
