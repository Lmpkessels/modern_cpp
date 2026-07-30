#include <iostream>

#define NAME_CHAR_BUFF 15 // Buffer to store characters of name

// std::cerr is used for adding debugging information
void say_hello()
{
    std::cerr << "say_hello() called\n";

    std::cout << "Please enter your name: ";
    char name[NAME_CHAR_BUFF];
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
}

int main(void)
{
    say_hello();

    return 0;
}