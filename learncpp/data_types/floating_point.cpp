#include <iostream>
#include <limits>
#include <iomanip>

void floating()
{
    // Always add a float so the compiler understands
    float f{5.0f}; // The 'f' suffix means float
    double lf{5.0}; // No 'f' suffix means double
    long double ldf{4123.0};

    std::cout << "Float: " << std::numeric_limits<decltype(f)>::max() << '\n';
    std::cout << "Long: " << std::numeric_limits<decltype(lf)>::max() << '\n';
    std::cout << "Long double: " << std::numeric_limits<decltype(ldf)>::max() << '\n';

    // Std::cout won't print the fractional part if it's 0
    std::cout << "Prints only 5: " << f << '\n';
}

// Prefer double over float
void precise()
{
    std::cout << std::setprecision(17);
    // Called a rounding error
    std::cout << 3.3333333333333333333333333333333333333f << '\n'; // Float is more 
                                                                   // error prone
    std::cout << 3.3333333333333333333333333333333333333 << '\n'; // Double is more 
                                                                  // accurate
}

int main(void)
{
    floating();
    precise();
    return 0;
}