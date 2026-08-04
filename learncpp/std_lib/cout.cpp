#include <iostream>

int main(void)
{
    char hello[] = "Hello";
    char world[] = "World";

    // Prints only Hello with a new line
    std::cout << hello << '\n';

    // Prints the sentence "Hello, World!"
    std::cout << hello << ", " << world << "!\n";
}