#include <iostream>


class Point3d
{
    int m_x{};
    int m_y{};
    int m_z{};
    public:
    void setValues(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void print()
    {
        std::cout << '<' << m_x << ',' << m_y << ',' << m_z << '>' <<'\n';
    }

    bool isEqual(Point3d p)
    {
        return (p.m_x == m_x) && (p.m_y == m_y) && (p.m_z == m_z);
    }
};

int main()
{
	Point3d point1{};
	point1.setValues(1, 2, 3);

	Point3d point2{};
	point2.setValues(1, 2, 3);
    
    point1.print();
    point2.print();

	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.setValues(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";
    return 0;
}


















