#include <iostream>

bool is_equal(int x, int y)
{
    return x == y;
}

void boolean_val()
{
    bool b1 {true};
    bool b2 {false};

    std::cout << b1 << '\n'; // Prints 1
    std::cout << b2 << '\n'; // Prints 0
    std::cout << !b1 << '\n'; // Prints 0 because '!' equals not so the bit is flipped
    std::cout << !b2 << '\n'; // Prints 1 because '!' equals not so the bit is flipped

    // Is used to transform 0 and 1 to false and true
    std::cout << std::boolalpha;

    std::cout << b1 << '\n'; // Prints true
    std::cout << b2 << '\n'; // Prints false
}

int main(void)
{
    boolean_val();

    int x {10};
    int y {11};

    std::cout << is_equal(x, y) << '\n'; // Returns 0

    y = {10};

    std::cout << is_equal(x, y) << '\n'; // Return 1

    // Is used to transform 0 and 1 to false and true
    std::cout << std::boolalpha;

    std::cout << is_equal(x, y) << '\n'; // Returns true

    return 0;
}