#include <iostream>

#define NAME_CHAR_BUFF 15 // Buffer for characters in name

/* int main(void)
{
    void value; // This won't compile variables can not be defined with an 
                // incomplete type
} */

void greet_user()
{
    std::cout << "Enter your name: ";
    char name[NAME_CHAR_BUFF];
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";

    // No return statement because void returns no value
}

int main(void) // Void here means no parameters
{
    greet_user();
    return 0;
}