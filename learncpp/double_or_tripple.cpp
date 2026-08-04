#include <iostream>

#define ANSWER_BUFF 7 // Answer for double or tripple question

// Double num
int double_int(int num) 
{
    return num * 2;
}

// Tripple num
int tripple_int(int num)
{
    return num * 3;
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

// Choose to double or tripple the number of choice
void choose()
{
    int received_num {};

    std::cout << "Please provide a number: ";
    std::cin >> received_num;

    std::cout << "Do you want to double or tripple the number? ";

    std::string answer {};
    std::cin >> answer;

    answer = to_lower(answer);

    // After receiving the number and answer on double or tripple make the 
    // decision
    if (answer == "double") {
        std::cout << double_int(received_num) << '\n';
    } else if (answer == "tripple") {
        std::cout << tripple_int(received_num) << '\n';
    } else {
        std::cout << "Invalid option\n";
    }
}

int main(void)
{
    choose();
}