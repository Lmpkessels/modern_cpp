#include <iostream>

// double_number(x) doubles 'x'
int double_number(int x)
{
    return x * 2;
}

// Doubles the number of the user input if provided correctly
int double_user_number()
{
    while (true) {
        std::cout << "Please provide a number: ";

        int received_num{};

        if (std::cin >> received_num) {
            std::cout << double_number(received_num) << '\n';
            return 0;
        }

        std::cout << "Only numbers are allowed.\n";

        std::cin.clear(); // Clear elements from input and repeat process
        std::cin.ignore(10000, '\n'); // Ignore bad input
    }
}

int main(void)
{
    // Returns 4
    std::cout << double_number(2) << '\n';

    double_user_number();
}