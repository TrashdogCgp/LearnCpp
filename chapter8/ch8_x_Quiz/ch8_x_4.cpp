#include <iostream>
#include "random.h" //blatantly stolen for better randomness than stock lower-effort stuff


// int getGuess()
// {
//     int userGuess{0};
//     std::cin >> guess;
//     if (std::cin.fail()) // did the extraction fail?
//     {
//         // yep, so let's handle the failure
//         std::cin.clear(); // put us back in 'normal' operation mode
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
//         continue; // and try again
//     }
// }
bool playAgain()
{
    while(true)
    {    
        std::cout << "Play again? (y/n)\n";
        char yesOrNo;
        std::cin >> yesOrNo;
        if(yesOrNo == 'y' || yesOrNo == 'Y') {return true;}
        if(yesOrNo == 'n' || yesOrNo == 'N') {return false;}
        std::cout << "Invalid option. Please type y to play again or n to exit the game\n";
    }
}

bool checkUserGuess(int userGuess, int correctNumber)
{
    if(userGuess == correctNumber)
    {
        return true;
    }
    else
    {
        if(userGuess < correctNumber)
        {
            std::cout << "Your guess is too low. Try again\n";
        }
        else
        {
            std::cout << "Your guess is too high. Try again\n";
        }
        return false;
    }
}

bool playGame(int correctNumber, int guessCount)
{
        for(int i{1}; i<=guessCount; ++i)
        {
            std::cout << "Guess #" << i << ": ";
            int userGuess{0};
            std::cin >> userGuess;
            bool isGuessCorrect = checkUserGuess(userGuess, correctNumber);
            if(isGuessCorrect)
            {
                std::cout << "Correct! You win!\n";
                return true;
            }
            if(i==7)
            {
                std::cout <<"Sorry, you lose. The correct number was " << correctNumber <<'\n';
                return false;
            }
        }
}

int main()
{
    constexpr int guessCount{7};
    do
    {
        const int randNum{Random::get(1, 100)};
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
        
        bool gameResult = playGame(randNum, guessCount);

        /* code */
    } while (playAgain());
    
}
