#include <iostream>

int do_math(int first, int second, int third, int fourth);

int main(void)
{
    std::cout << do_math(33, 12, 77, 84) << '\n';
    return 0;
}

int do_math(int first, int second, int third, int fourth)
{
    return (first + second) * (third + fourth);
}