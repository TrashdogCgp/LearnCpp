#include <iostream>
#include <string>


class MyString
{
private:
    std::string m_str{};
public:
    MyString(std::string_view str)
    : m_str{str}
    {}
    friend std::ostream& operator<<(std::ostream& out, const MyString& s);
    std::string operator()(int start, int length);
};

std::string MyString::operator()(int start, int length)
{
    return m_str.substr(static_cast<std::size_t>(start), static_cast<std::size_t>(length));
}

std::ostream& operator<<(std::ostream& out, const MyString& s)
{
    out << s.m_str;
    return out;
}

int main()
{
	MyString s{ "Hello, world!" };
	std::cout << s(7, 5) << '\n'; // start at index 7 and return 5 characters

	return 0;
}











