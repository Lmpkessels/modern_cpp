#include <iostream>

#define BUFF_CHAR_NAME 15 // Buffer for characters in name 

char name_rec[BUFF_CHAR_NAME]; // Declaration
void hello(char name[]); // Declaration

int main(void)
{   
    std::cout << "Please provide your name: ";
    std::cin >> name_rec; // Defined after receiving input 
                          // (defintion + declaration)
    hello(name_rec);

    return 0;
}

void hello(char name[]) // Definition + declaration
{
    std::cout << "Hello, " << name << "!\n";
}

// In C++ all definitions are declarations