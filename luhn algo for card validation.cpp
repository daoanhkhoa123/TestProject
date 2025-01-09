#include <iostream>
using std::string, std::cout, std::cin;

bool LuhnAlgo(const string cardNum){
    // double second digit from right to left
    // if doubled numbers are two digits then split them
    // sum them
    int size = cardNum.length();
    int sum;
    for (int i = size - 1; i >=0; i--){
        if ( i % 2 == 0){ // second digit = {even index}
            int num = ((int) cardNum[i] - '0') * 2;
            sum += num / 10 + num % 10; 
        }
        else{
            sum += ((int) cardNum[i] - '0');
        }
    }
    if (sum % 10 == 0){
        return true;
    }
    return false;
}

int main(){
    // const param  
    const string cardNum = "6011000990139424";
    cout << LuhnAlgo(cardNum);



}