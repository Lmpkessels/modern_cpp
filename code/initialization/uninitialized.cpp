#include <iostream>

void do_nothing(int&)
{
}

int main(void)
{
    // unused memory will be assigned to 'x' because,
    // 'x' is uninitialized
    int x;

    std::cout << x << '\n';

    int y;

    do_nothing(y); // make the compiler think we're assigning a value to this 
                   // variable

    // print the value of x to the screen (who knows what we'll get, because x 
    // is uninitialized)
    std::cout << y << '\n';

    return 0;
}