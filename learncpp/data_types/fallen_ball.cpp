#include <iostream>

// Get the height in meters from which the ball should fall trough the user
double get_meters() 
{
    std::cout << "Enter the hight of the tower in meters: ";
    double meters{};
    std::cin >> meters;

    return meters;
}

// Get the second in which the ball should reach the ground trough the user
int get_seconds()
{
    std::cout << "Enter the time in which you expect it to hit the ground: ";
    int seconds{};
    std::cin >> seconds;

    return seconds;
}

// Calculate and return the fallen height
double get_fallen_height(double meters, int seconds)
{
    constexpr double gravity{9.8};

    double fallen {gravity * (seconds * seconds) / 2.0};
    double fallen_height {meters - fallen};

    if (fallen_height < 0.0)
        return 0.0;

    return fallen_height;
}

// Print the fallen ball height till it reaches the ground
void print_fallen_ball_height(double fallen_height, int seconds)
{
    if (fallen_height > 0.0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: "
        << fallen_height << " meters\n";
    } else {
        std::cout << "The ball is on the ground.\n";
    }
}

// Use: get_fallen_height() and print_fallen_ball_height() to calculate 
// the fallen height, and print the calculated height at every second
void calculate_and_print(double meters, int seconds)
{
    double fallen_height {get_fallen_height(meters, seconds)};
    print_fallen_ball_height(fallen_height, seconds);
}

int main(void)
{
    double meters{get_meters()};
    int seconds{get_seconds()};

    std::cout << "\nIf you see the message 'The ball is on the ground' then the "
    << "ball has reached the ground earlier then the given seconds.\n\n";

    for (int i = 0; i <= seconds; i++) {
        calculate_and_print(meters, i); // The bug was here i used var 'seconds'
                                        // instead of 'i'
    }

    return 0;
}