#include <iostream>
#include <limits>

// Signed integers shows the minimum and maximum values of:
// - short, int, long, long long
//
// integer types are also called integrals.
// (char, and bool are also integrals in C++)
void signed_integers()
{
    // Signed integers can be either negative or positive
    short s;
    int i;
    long l;
    long long ll;

    std::cout << "Min negative short: " 
    << std::numeric_limits<decltype(s)>::min() << '\n';
    std::cout << "Max positive short: " 
    << std::numeric_limits<decltype(s)>::max() << '\n';

    std::cout << "Min negative integer: " 
    << std::numeric_limits<decltype(i)>::min() << '\n';
    std::cout << "Max positive integer: " 
    << std::numeric_limits<decltype(i)>::max() << '\n';

    std::cout << "Min negative long: " 
    << std::numeric_limits<decltype(l)>::max() << '\n';
    std::cout << "Max positive long: " 
    << std::numeric_limits<decltype(l)>::max() << '\n';

    std::cout << "Min negative long long: " 
    << std::numeric_limits<decltype(ll)>::min() << '\n';
    std::cout << "Max positive long long: " 
    << std::numeric_limits<decltype(ll)>::max() << '\n';
}

int main(void)
{
    signed_integers();
    return 0;
}