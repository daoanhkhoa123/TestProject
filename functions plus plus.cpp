#include <iostream>
#include <iomanip>

void showBallane(double ballance){
    std::cout << "Your ballance is $"<< std::setprecision(2)<<std::fixed<<ballance<<"\n";
}
double deposit(){
    double depositAmmount;
    std::cout << "Enter the ammount of money: ";
    std::cin >> depositAmmount;
    if(depositAmmount>0){
        return depositAmmount;
    }
    else{
        std::cout << "That's not a valid ammount";
        return 0;
    }
}
double withdraw(double ballance){
    double amount;
    std::cout << "Enter the withdraw amount: ";
    std::cin >> amount;
    if (amount <= ballance){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount\n";      
        return 0;  
    }
}
int main(){
    double ballance = 0;
    int choice = 0;
    do{
        std::cout << "Enter your choice: \n";
        std::cout << "1: Show ballance\n";
        std::cout << "2: Deposit money\n";
        std::cout << "3: Withdraw\n";
        std::cout << "4: Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBallane(ballance);
                break;
            case 2: ballance += deposit();
                break;
            case 3: ballance -= withdraw(ballance);
                break;
            case 4: std::cout << "Thanks\n";
                break;
            default: std::cout << "Invalid choice\n";            
        }
    }while(choice != 4);

    return 0;

}