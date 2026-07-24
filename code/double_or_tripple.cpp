#include <iostream>

#define ANSWER_BUFF 7 // Answer for double or tripple question

int double_int(int num) 
{
    return num * 2;
}

int tripple_int(int num)
{
    return num * 3;
}

int choose()
{
    std::cout << "Please provide a number: ";
    int received_num {}

    std::cout << "Do you want to double or tripple the number?";
    char answer[ANSWER_BUFF];
    std::cin >> answer;

    if ((char)tolower(answer) == "double") {
        double_int(received_num);
    } else if (char(tolower(answer) == "tripple")) {
        tripple_int(received_num);
    }
}

int main(void)
{
    choose();
}