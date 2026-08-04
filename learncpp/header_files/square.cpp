#include "square.hpp"
#include <iostream>

int get_square_sides()
{
    return 4;
}

int square(int side_length)
{
    return side_length * get_square_sides();
}