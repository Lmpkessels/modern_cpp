#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

#define NAME_CHAR_BUFF 15 // Buffer to store amount of characters in name

int get_num()
{   
    PLOGD << "get_num() called";

    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    return num;
}

int main(void)
{
    plog::init(plog::debug, "code/debugging/logfile.txt");

    int the_number{get_num()};
    std::cout << "The number is, " << the_number << "!\n";

    return 0;
}