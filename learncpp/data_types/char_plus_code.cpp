#include <iostream>
#include <cstdint>

// Concerts a type using static cast
void cast_conversion()
{
    std::cout << "Enter a single character: ";
    char answerc{};
    std::cin >> answerc;

    std::cout << "You entered '" << answerc << "' which has the ASCII code: "
    << static_cast<int>(answerc) << '\n';
}

// Converts a type using implicit type conversion
void implicit_type_conversion()
{
    std::cout << "Enter a single character: ";
    char answerc{};
    std::cin >> answerc;

    int asciic {answerc};
    
    std::cout << "You entered '" << answerc << "' which has the ASCII code: "
    << asciic << '\n';
}

int main(void)
{
    cast_conversion();

    implicit_type_conversion();
    
    return 0;
}