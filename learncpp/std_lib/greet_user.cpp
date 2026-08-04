#include <iostream>

#define NAME_CHAR_BUFF 20 // Buffer for max characters name

// Greet user: used to greet the user after he/she provided his/her
// name.
int greet_user()
{
    char provide[] {"Please provide your name: "};

    std::cout << provide << '\n';

    char name[NAME_CHAR_BUFF];

    std::cin >> name;

    std::cout << "Hello, " << name << "!\n";

    return 0;
}

int main(void)
{
    greet_user();
}