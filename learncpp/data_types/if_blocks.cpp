#include <iostream>

int is_prime_btw_0_and_10()
{
    while (true) {
        std::cout << "Enter a number >= 0 && <= 10: ";
        int number{};
        std::cin >> number;
        if (number <= 10) {
            if (number == 2 || number == 3 || number == 5 || number == 7) {
                std::cout << "The number is prime!\n";
                return 0;
            } else {
                std::cout << "The number is not prime!\n";
                return 0;        
            }
        } else {
            continue;
        }
    }
}

int main(void)
{
    is_prime_btw_0_and_10();
    return 0;
}