#include <iostream>
#include <cstdint>

void print(int x)
{
    std::cout << "Int = " << x << '\n';
}

// Cast transforms from one data-type to another in this example, double to int,
// char to int, and unsigned int to int
void static_castf()
{
    double dx {11.5};
    std::cout << "Before cast: " << sizeof(dx) * 8 << '\n';
    print(static_cast<int>(dx));
    std::cout << "After cast: " << sizeof(static_cast<int>(dx)) * 8 << '\n';

    char cx {'x'};
    std::cout << "Before cast: " << sizeof(cx) * 8 << '\n';
    print(static_cast<int>(cx));
    std::cout << "After cast: " << sizeof(static_cast<int>(cx)) * 8 << '\n';

    unsigned int uix {55};
    std::cout << "Before cast: " << sizeof(uix) * 8 << '\n';
    print(static_cast<int>(uix));
    std::cout << "After cast: " << sizeof(static_cast<int>(uix)) * 8 << '\n'; 
}

void behave_like_char()
{
    std::int8_t ca {65}; // Is capital A because in ascii 65 is A and int8_t/uint_t
                        // Behave like chars

    std::uint8_t cb {66}; // Is capital B

    std::cout << ca << '\n';
    std::cout << cb << '\n';

    std::cout << static_cast<int>(ca) << '\n'; // Now the number 65 is printed
    std::cout << static_cast<int>(cb) << '\n'; // Now the number 66 is printed
}

int main(void)
{
    static_castf();

    behave_like_char();

    return 0;
}