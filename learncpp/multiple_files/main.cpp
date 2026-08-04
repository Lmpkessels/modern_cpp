#include <iostream>

int add(int x, int y);
int get_integer();

int main(void)
{
    std::cout << add(10, 12) << '\n';

    int x{ get_integer() };
	int y{ get_integer() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}