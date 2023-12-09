#include <iostream>

//Admittedly cheating here by making a function to do this, but I'm tired of following Mavis Beacon on this road to hell
//Just let me use unintroduced knowledge and not have to create another program
void quizTripleAddendum(int userInput)
{
    std::cout << "Triple " << userInput << " is: " << userInput * 3 << '\n';
}

int main()
{
    std::cout << "Enter an integer: " << '\n';

    int num{};
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << '\n';

    std::cout << "Now, running quiz portion:'\n'";
    quizTripleAddendum(num);
    return 0;
}
