#include <iostream>

class Ball
{
private:
    std::string m_color{};
    double m_radius{};

public:
    Ball(std::string color = "black", double radius=10.0)
    : m_color{color}
    , m_radius{radius}
    {    }

    Ball(double radius)
    : Ball{"black", radius}
    {   }

    const std::string& getColor() {return m_color;}
    const double& getRadius() {return m_radius;}
};

void print(Ball b)
{
    std::cout << "Ball (" << b.getColor() << ", " << b.getRadius() << ")\n";
}

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    print(def);
    print(blue);
    print(twenty);
    print(blueTwenty);

    return 0;
}
