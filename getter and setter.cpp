#include <iostream>

using std::string, std::cout, std::cin;

class Pizza{
    private:
        int temperature = 10;
    public:     
        string topping1;
        string topping2;
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    Pizza(){};
    int getTemp(){ // getter: get a private attribute
        return temperature;
    }
    void setTemp(int temperature){ // setter: modify a private attribute
        this->temperature = temperature;
    }
};
int main(){
    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");

    // getter, setter   
    cout << pizza2.topping2 << "\n";
    cout << pizza2.getTemp() << "\n";
    pizza2.setTemp(30);
    cout << pizza2.getTemp() << "\n";

}