#include <iostream>

int main(void)
{
    int x { 221 }; // Becomes the initial value of x
    int y {}; // Equals 0

    int sum { x + y }; // Equals 221 + 0 = 221

    std::cout << sum << '\n';

    // int z { 225.6 }; // Z will perform a compiler error to prevent the loss of data
    float z { 225.6 }; // Is computed correctly
    
    std::cout << z << '\n';

    int a = 225.6; // While instead a will be truncated to 225

    std::cout << a << '\n';

    return 0;
}