#include <iostream>

double zero{0.0};

void inf()
{
    double posinf{5.0 / zero};
    std::cout << posinf << '\n'; // Positive infinity

    double neginf{-5.0 / zero};
    std::cout << neginf << '\n'; // Negative infinity

    double z1{0.0 / posinf};
    std::cout << z1 << '\n'; // Positive zero

    double z2{-0.0 / posinf};
    std::cout << z2 << '\n'; // Negative zero
}

// If mathmatically invalid its NaN
void nan()
{
    double nan {zero / zero}; // not a number
    std::cout << nan << '\n';
}

int main(void)
{   
    inf();
    nan();
    return 0;
}