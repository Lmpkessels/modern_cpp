#include <iostream>

// Reads number from user input then returns it
int read_number()
{
    std::cout << "Please provide a number: ";
    int received_num{};
    std::cin >> received_num;

    return received_num;
}

// Adds up two integers (x,y)
int add(int x, int y)
{
    return x + y;
}

// Prints the result of the sum after receiving 2 integers (x,y) and adding them 
// up
void print_result()
{
    int x{read_number()};
    int y{read_number()};
    int sum{add(x, y)};

    std::cout << "The result of the sum is " << sum << ".\n";
}