#include <iostream>

#define GREETS_CHAR_BUFF 10 // Buffer for characters in greet

void literals()
{
    int x {10}; // 10 Here is the literal of the type int
    char greet[GREETS_CHAR_BUFF] = "Hello!"; // Hello! Here is the literal of the char type

    // Like this is every value a literal

    std::cout << "Literal: " << x << '\n';
    std::cout << "Literal: " << greet << '\n';
}

void literal_suffixes()
{
    float fx {4.8f}; // If the suffix 'f' wasn't used it would be double

    std::cout << "Literal: " << fx << " with float suffix 'f'" << '\n';
}

int main(void)
{
    literals();
    literal_suffixes();
    return 0;
}