#include <iostream>

int main(void)
{
    char receive[100];

    // std::cin means character in which is then stored in
    // receive
    std::cin >> receive;

    // Here the received input is printed
    std::cout << receive << '\n';

    return 0;
}