#include "io.h"
#include <iostream>

int main()
{
    int firstNum{readNumber()};
    int secondNum{readNumber()};
    writeNumber(firstNum + secondNum);
    return 0;
}
