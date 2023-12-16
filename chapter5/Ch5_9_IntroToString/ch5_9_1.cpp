#include <string>
#include <iostream>



std::string getFullName()
{
    std::cout << "Enter your full name:\n";
    std::string fullName{};
    //The std::ws isn't actually necessary for our use case, but... good to include
    std::getline(std::cin >> std::ws, fullName);
    //Not sure whether or not it's advised to return a string like this
    //Does move semantics save this return operation, or...?
    return fullName; 
}

int getAge()
{
    std::cout << "Enter your age:\n";
    int age {};
    std::cin >> age;
    return age;
}

int main()
{
    std::string fullName{getFullName()};
    int age {getAge()};
    std::cout << "Your age + name length is: " << age + static_cast<int>(fullName.length()) <<'\n';
    
}
