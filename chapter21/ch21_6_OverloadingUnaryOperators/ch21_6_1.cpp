#include <iostream>
class Point
{
private:
    double m_x {};
    double m_y {};
    double m_z {};

public:
    Point(double x=0.0, double y=0.0, double z=0.0):
        m_x{x}, m_y{y}, m_z{z}
    {
    }

    // Convert a Point into its negative equivalent
    Point operator- () const;

    // Return true if the point is set at the origin
    bool operator! () const;

    // Return the operand verbatim
    Point operator+ () const { return *this;}

    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getZ() const { return m_z; }
};

int main()
{
    Point p1{2,3,4};
    Point p2{+p1};

    std::cout << p2.getX() << ' ' << p2.getY() << ' ' << p2.getZ() <<'\n';
}

