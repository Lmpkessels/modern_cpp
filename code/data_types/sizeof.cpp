#include <iostream>

// Displays sizes of basic data-types in C++
void display_type_sizes()
{
    std::cout << "Boolean\n";
    std::cout << "bool: " << sizeof(bool) << "\n\n"; // 1 Byte

    std::cout << "Integral:\n";
    std::cout << "int: " << sizeof(int) << '\n'; // 4 Bytes
    std::cout << "unsigned int: " << sizeof(unsigned int) << "\n"; // 4 Bytes
    std::cout << "short: " << sizeof(short) << '\n'; // 2 Bytes
    std::cout << "long: " << sizeof(long) << '\n'; // 8 Bytes
    std::cout << "long long: " << sizeof(long long) << "\n\n"; // 8 Bytes

    std::cout << "Character:\n";
    std::cout << "char: " << sizeof(char) << '\n'; // 1 Byte
    std::cout << "wchar_t: " << sizeof(wchar_t) << '\n'; // 4 Bytes
    std::cout << "char8_t: " << sizeof(char8_t) << '\n'; // 1 Bytes
    std::cout << "char16_t: " << sizeof(char16_t) << '\n'; // 2 Bytes
    std::cout << "char32_t: " << sizeof(char32_t) << "\n\n"; // 4 Bytes
    
    std::cout << "Floating point:\n";
    std::cout << "float: " << sizeof(float) << '\n'; // 4 Bytes
    std::cout << "double: " << sizeof(double) << '\n'; // 8 Bytes
    std::cout << "long double: " << sizeof(long double) << "\n\n"; // 16 Bytes 

    std::cout << "NULL Pointer:\n";
    std::cout << "std::nullptr_t: " << sizeof(std::nullptr_t) << '\n'; // 8 Bytes
}

int main(void)
{
    display_type_sizes();
    return 0;
}