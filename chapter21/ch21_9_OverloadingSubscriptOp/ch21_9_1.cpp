#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>


struct StudentGrade
{
    std::string m_name{};
    char m_grade{};
};

class GradeMap
{
private:
    std::vector<StudentGrade> m_map{};
public:
    char& operator[] (std::string_view name)
    {
        auto nameFound{std::find_if(m_map.begin(), m_map.end(),
            [name] (const auto& studentName)
            {
                return (name == studentName.m_name);
            }
        )};
        
        if(nameFound != m_map.end())
        {
            return nameFound->m_grade;
        }
        m_map.push_back(StudentGrade{std::string{name}});
        return m_map.back().m_grade;
    }
};



int main()
{
    GradeMap grades{};

	grades["Joe"] = 'A';
	grades["Frank"] = 'B';

	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';

    return 0;
}


