#include "constantsCh8_x_1.h"
#include <iostream>

double calculateHeight(double initialHeight, int seconds)
{
    double height {initialHeight - constants8_1::gravity * seconds * seconds / 2};
    if(height <= 0.0) {return 0.0;}
    else {return height;}
}

int printHeight(double initialHeight, int seconds)
{
    const int ballHeight = calculateHeight(initialHeight, seconds);     
    std::cout << "At time of " << seconds << ", height is: " << ballHeight << '\n';
    return ballHeight;
}

int main(void)
{
    const int initialHeight{6969}; //NICE!
    int secondsElapsed{0};
    while(printHeight(initialHeight, secondsElapsed) > 0.0)
    {
        ++secondsElapsed;
    }
}
