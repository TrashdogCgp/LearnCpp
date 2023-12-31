#include <iostream>

class Ball
{
private:
    std::string m_color{};
    double m_radius{};

public:
    Ball(std::string color, double radius)
    : m_color{color}
    , m_radius{radius}
    {    }

    Ball(std::string color)
    : m_color{color}
    , m_radius(10)
    {   }

    Ball(double radius)
    : m_color{"black"}
    , m_radius{radius}
    {   }

    Ball()
    : m_color{"black"}
    , m_radius(10)
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
