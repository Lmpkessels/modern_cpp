#include <iostream>
#include <limits>

// Gives the max values of unsigned integers,
// - unsigned short, int, long, and long long
void unsigned_integers()
{
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;

    std::cout << "Unsigned short: " 
    << std::numeric_limits<decltype(us)>::max() << '\n';

    std::cout << "Unsigned int: "
    << std::numeric_limits<decltype(ui)>::max() << '\n';

    std::cout << "Unsigned long: "
    << std::numeric_limits<decltype(ul)>::max() << '\n';

    std::cout << "Unsigned long long: "
    << std::numeric_limits<decltype(ull)>::max() << '\n';
}

int main(void)
{
    unsigned_integers();
    return 0;
}