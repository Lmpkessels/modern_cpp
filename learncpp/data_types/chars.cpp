#include <iostream>

void print_luuk()
{
    // A char has a code in the ASCII table, here the codes are used for L, u, k
    char l {76};
    char u {117};
    char k {107};

    std::cout << l << u << u << k << '\n';

    // It can also be done with the original character like,
    char cl {'L'};
    char cu {'u'};
    char ck {'k'};

    std::cout << cl << cu << cu << ck << '\n';
}

// A function that questions if you like chess
int do_you_likes_chess()
{
    while (true) {
        std::cout << "Do you like chess? (y/n): ";
        char answer{};
        std::cin >> answer;

        if (!(answer == 'y' || answer == 'n')) {
            std::cout << "Please choose between (y/n)." << '\n';
            continue;
        }

        if (answer == 'y') {
            std::cout << "You do like chess!" << '\n';
            return 0;
        } else if (answer == 'n') {
            std::cout << "You don't like chess..." << '\n';
            return 0;
        }
    }
}

int main(void)
{
    print_luuk();

    do_you_likes_chess();

    return 0;
}