#include <iostream>

int number_guessing_game(void)
{
    const int number_to_guess {12};

    while (true) {
        std::cout << "Provide a number between 0 - 20:\n";
        int number_received {};
        std::cin >> number_received;

        if (number_received < 0 || number_received > 20) {
            std::cout << "The number cannot be less than 0 or greater than 20.\n";
            continue;
        }

        if (number_received == number_to_guess) {
            std::cout << "You guessed the number it's " << number_to_guess << "!\n";
            return 0;
        }

        std::cout << "Try again!\n";
    }
}

int main(void)
{
    number_guessing_game();
}