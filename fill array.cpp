#include <iostream>
#include <string>

void fill(std::string* foods[], int size, int begin, int end,  std::string& value) {
    for (int i = begin; i <= end; i++) {
        foods[i] = new std::string(value); 
    }
}

int main() {
    // Declare and initialize an array of strings
    std::string foods[] = {"pizza", "pepperoni", "kfc", "hello", "whatever", "pepperoni", "kfc", "hello", "whatever", "pepperoni", "kfc", "hello", "whatever", "pepperoni", "kfc", "hello", "whatever"};
    int size = sizeof(foods) / sizeof(foods[0]); 

    // Print the initial array
    std::cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        std::cout << foods[i] << " ";
    }
    std::cout << std::endl;

    // Define the range and the value to fill
    int begin = 3;
    int end = 6;
    std::string value = "notthistime";

    // Create an array of pointers to the strings
    std::string* food_ptrs[size];
    for (int i = 0; i < size; i++) {
        food_ptrs[i] = &foods[i];
    }

    // Call the fill function
    fill(food_ptrs, size, begin, end, value);

    // Print the modified array
    std::cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        std::cout << foods[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamically allocated memory
    for (int i = begin; i <= end; i++) {
        delete food_ptrs[i]; 
    }

    return 0;
}


