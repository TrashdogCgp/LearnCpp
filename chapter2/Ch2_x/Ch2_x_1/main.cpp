#include <iostream> 

//Function bodies commented out for question 2
int readNumber();
// {
//     std::cout << "Enter an integer: " << '\n';
//     int num{};
//     std::cin >> num;
//     return num;
// }

void writeNumber(int number);
// {
//     std::cout << "The answer is: " << number << '\n';
// }


int main()
{
    int firstNum {readNumber()};
    int secondNum {readNumber()};
    writeNumber(firstNum + secondNum);

    return 0;
}
