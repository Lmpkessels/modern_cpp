#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int divis(int x, int y)
{
    return x / y;
}

// Transform all characters to lower case
std::string to_lower(std::string str)
{
    for (char& c : str)
    {
        c = std::tolower(c);
    }

    return str;
}

// Asks for user input and perform simple math either:
// - addition
// - subtraction
// - multiplication
// - or division
void question()
{
    std::cout << "Enter one number: ";
    int answer1{};
    std::cin >> answer1;

    std::cout << "Enter a second number: ";
    int answer2{};
    std::cin >> answer2;

    std::cout << "Enter a opperation choose from (+, -, *, /): ";
    std::string answer3{};
    std::cin >> answer3;
    answer3 = to_lower(answer3);

    char op{};
    int answer{};

    if (answer3 == "+") {
        op = '+';
        answer = add(answer1, answer2);
    } else if (answer3 == "-") {
        op = '-';
        answer = sub(answer1, answer2);
    } else if (answer3 == "*") {
        op = '*';
        answer = mul(answer1, answer2);
    } else if (answer3 == "/") {
        op = '/';
        answer = divis(answer1, answer2);
    } else {
        std::cout << "Invalid operation function terminated";
    };

    std::cout << answer1 << " " << op << " " << answer2 << " = " << answer << '\n';
}