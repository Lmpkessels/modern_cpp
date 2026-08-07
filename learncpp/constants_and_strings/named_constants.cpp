#include <iostream>

#define OBJECT_LIKE_MACRO "Object Like Macro" // An object like macro

int named(const int z) // A parameter can be a constant but it's not prefered
                       // since its only a copy thats going trough named 
{
    const int x {10}; // Prefered way to define a const
    int const y {11}; // Can be defined like this but not prefered

    // x = 12; // This will cause a compiler error

    return y; // A constant can be returned
}

void print_gravity()
{
    #define gravity 9.8 // The measurement of gravity
    std::cout << "The measurement of gravity " << gravity << '\n';
}

int main(void)
{
    named(10);

    print_gravity();

    // A object like macro doesn't care about scope, so defining gravity in
    // this scope will conflict with the object like macro in print_gravity()
    int gravity {9};

    std::cout << gravity << '\n';

    return 0;
}