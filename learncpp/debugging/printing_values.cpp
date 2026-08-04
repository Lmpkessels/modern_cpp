#include <iostream>

// #define ENABLE_DEBUG // Comment out to enable debug

int get_user_input()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "get_user_input(): function call\n";
    #endif

    std::cout << "Please enter a number: ";
    int num{};
    std::cin >> num;
    return num;
}

int main(void)
{
    get_user_input();
    return 0;
}