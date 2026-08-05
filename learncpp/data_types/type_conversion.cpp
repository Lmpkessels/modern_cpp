#include <iostream>

void print(double x)
{
    std::cout << x << '\n';
}

int main(void)
{
    print(5.5); // Here 5 (which has the data-type of int) 
              // will be converted to double
              //
              // Called: implicit type conversion
    return 0;
}