#include <string>
#include <iostream>


std::string getFullName(int personNumber)
{
    std::cout << "Enter full name of person " << personNumber << ":\n";
    std::string fullName{};
    std::getline(std::cin >> std::ws, fullName);
    return fullName;
}

int getAge(int personNumber)
{
    std::cout << "Enter age of person " << personNumber << ":\n";  
    int age {};
    std::cin >> age;
    return age;
}

int main()
{
    const std::string personOneName{getFullName(1)};
    const int personOneAge{getAge(1)};

    const std::string personTwoName{getFullName(2)};
    const int personTwoAge{getAge(2)};

    const bool personOneOlder = personOneAge > personTwoAge;

    //Honestly should've made a function with four input parameters, but...
    if(personOneOlder)
    {
        std::cout << personOneName << " (age " << personOneAge << ") is older than " << personTwoName << " (age " << personTwoAge << ")\n"; 
    }
    else
    {
                std::cout << personTwoName << " (age " << personTwoAge << ") is older than " << personOneName<< " (age " << personOneAge << ")\n";
    }

    return 0;
}



