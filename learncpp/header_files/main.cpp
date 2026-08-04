#include "add.hpp"
#include "square.hpp"
#include <iostream>

int main(void)
{
    //question();

    std::cout << "Please provide a number of which you want the square: ";
    int input{};
    std::cin >> input;

    std::cout << "The square of " << input <<  " is " << square(input) << ".\n";

    return 0;
}