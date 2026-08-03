#include <iostream>
#include <cstdint>

// Prints difference between least and fast fixed width integers
// it depends on whats processed fastest by the CPU
void least_and_fast()
{
    std::cout << "Least fixed width int:\n";
    std::cout << "Least signed 8 bits: "
    << sizeof(std::int_least8_t) * 8 << '\n';
    std::cout << "Least signed 16 bits: "
    << sizeof(std::int_least16_t) * 8 << '\n';
    std::cout << "Least signed 32 bits: "
    << sizeof(std::int_least32_t) * 8 << '\n';

    std::cout << "\nFast fixed width int:\n";
    std::cout << "Fast signed 8 bits: "
    << sizeof(std::int_fast8_t) * 8 << '\n';
    std::cout << "Fast signed 16 bits: "
    << sizeof(std::int_fast16_t) * 8 << '\n';
    std::cout << "Fast signed 32 bits: "
    << sizeof(std::int_fast32_t) * 8 << '\n';
    
}

int main()
{
    least_and_fast();
    return 0;
}