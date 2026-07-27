#include <iostream>

int add(int x, int y); // Forward declaration such that the compiler can find add()
                       // because it knows what to look for
                       // (function declaratioin)

int main(void)
{
    std::cout << add(10, 44) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}