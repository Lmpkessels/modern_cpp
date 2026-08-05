#include <iostream>
#include <typeinfo>

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}

double div(double x, double y)
{
    return x / y;
}

void do_math()
{
    while (true) {
        std::cout << "Enter a double value: ";
        double value1{};
        std::cin >> value1;
        
        std::cout << "Enter a double value: ";
        double value2{};
        std::cin >> value2;

        std::cout << "Choose a mathematical operation (+, -, *, /): ";
        char operation{};
        std::cin >> operation;

        if (operation == '+') {
            std::cout << add(value1, value2) << '\n';
            return;
        } else if (operation == '-') {
            std::cout << sub(value1, value2) << '\n';
            return;
        } else if (operation == '*') {
            std::cout << mul(value1, value2) << '\n';
            return;
        } else if (operation == '/') {
            std::cout << div(value1, value2) << '\n';
            return;
        } else {
            std::cout << "The operator you gave is invalid please try again\n";
            continue;
        }
    }
}

int main(void)
{
    do_math();
    return 0;
}