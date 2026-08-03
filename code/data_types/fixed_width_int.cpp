#include <iostream>
#include <cstdint>
#include <limits>

// Prints sizes of fixed width integers
void fixed_width()
{    
    std::int8_t sie;
    std::uint8_t uie;

    std::cout << "\n8 Bit integers:\n";

    std::cout << "Signed 8 Bit integer max: " 
    << std::numeric_limits<decltype(sie)>::max() << '\n';
    std::cout << "Signed 8 Bit integer min: " 
    << std::numeric_limits<decltype(sie)>::min() << '\n';
    std::cout << "Unsigned 8 Bit integer max: " 
    << std::numeric_limits<decltype(uie)>::max() << '\n';
    
    std::int16_t sis;
    std::uint16_t uis;

    std::cout << "\n16 Bit integers:\n";

    std::cout << "Signed 16 Bit integer max: " 
    << std::numeric_limits<decltype(sis)>::max() << '\n';
    std::cout << "Signed 16 Bit integer min: "
    << std::numeric_limits<decltype(sis)>::min() << '\n';
    std::cout << "Unsigned 16 Bit integer max: "
    << std::numeric_limits<decltype(uis)>::max() << '\n';
    
    std::int32_t sit;
    std::uint32_t uit;
    
    std::cout << "\n32 Bit integers:\n";

    std::cout << "Signed 32 Bit integer max: "
    << std::numeric_limits<decltype(sit)>::max() << '\n';
    std::cout << "Signed 32 Bit integer min: "
    << std::numeric_limits<decltype(sit)>::min() << '\n';
    std::cout << "Unsigned 32 Bit integer max: "
    << std::numeric_limits<decltype(uit)>::max() << '\n';
    
    std::int64_t sisf;
    std::int64_t uisf;

    std::cout << "\n64 Bit integers:\n";
    
    std::cout << "Signed 64 Bit integer max: "
    << std::numeric_limits<decltype(sisf)>::max() << '\n';
    std::cout << "Signed 64 Bit integer min: "
    << std::numeric_limits<decltype(sisf)>::min() << '\n';
    std::cout << "Unsigned 64 Bit integer max: "
    << std::numeric_limits<decltype(uisf)>::max() << '\n';
}

int main(void)
{
    fixed_width();
    return 0;
}