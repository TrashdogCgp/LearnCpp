#include <iostream>

//Have user input starting height of ball
double getMetersFromUser()
{
    std::cout << "Please input height of the ball in meters:\n";
    double startingHeight{};
    std::cin >> startingHeight;
    return startingHeight;
}

//Calculate height of ball above ground
double calculateBallHeight(double startingHeight, int time)
{
    double gravity {9.81}; //Yes, I know this should be a const, but they're not covered yet.
    return startingHeight - gravity * time * time / 2.0;
}

//Print height of ball above ground
void printBallHeight(double ballHeight, int time)
{
    if(ballHeight > 0.0)
        std::cout << "At " << time << " seconds, the ball is at height: " << ballHeight <<'\n';
    else
        std::cout << "At " << time << " seconds, the ball is on the floor'\n";
}

int main()
{
    double ballHeight{ getMetersFromUser() };
    int t{0};

    //t=0
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    t = 1;
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    t = 2;
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    t = 3;
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    t = 4;
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    t = 5;
    printBallHeight(calculateBallHeight(ballHeight, t), t);

    return 0;
}












