#include <iostream>

#define CHAR_BUFF_CHOICE 10 // Buffer for choice between add or subtract

int add(int x, int y)
{
    std::cerr << "add(): function call\n";
    return x + y;
}

int sub(int x, int y)
{
    std::cerr << "sub(): function call\n";
    // The bug is that the addition operator is used instead of the subtraction
    // return x + y;
    // Valid operator
    return x - y;
}

int get_user_input()
{
    std::cout << "Please provide a number: ";
    int num{};
    std::cin >> num;
    return num;
}

int choose()
{   
    int num1{get_user_input()};
    int num2{get_user_input()};
    
    while (true) {
        std::cout << "Choose between addition or subtraction trough, (+, -): ";
        char choice[CHAR_BUFF_CHOICE];
        std::cin >> choice;

        if (*choice == '+') {
            std::cout << num1 << "+" << num2 << "=" << add(num1, num2) << '\n';
            return 0;
        } else if (*choice == '-') {
            // Here's the bug
            // std::cout << num1 << "-" << num2 << "=" << sub(num1, num2) << '\n';
            return 0;
        } else {
            std::cout << "Invalid operator.\n";
        }
    }
}

int main(void)
{
    choose();

    return 0;
}