#include <iostream>

class Ball
{
private:
    std::string m_color{""};
    double m_radius{};
public:
    Ball(std::string color, double radius)
        : m_color{color}
        , m_radius{radius}
    {        }
    double getRadius() const { return m_radius; }
    const std::string& getColor() { return m_color; }
    
};

void print(Ball ball)
{
    std::cout << "The ball color is " << ball.getColor() << " and the ball radius is " << ball.getRadius() << '\n';
}



int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

	return 0;
}

