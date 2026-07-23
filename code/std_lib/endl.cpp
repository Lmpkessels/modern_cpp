#include <iostream>

int main(void)
{
    char hello_world[] = "Hello, World!";

    // Add '\n' trough end line
    //
    // Imagine the insertion operator (<<) to move hello_world
    // towards std::cout
    std::cout << hello_world << std::endl << hello_world << std::endl;

    return 0;
}