#include <iostream>
#include "random.h" //blatantly stolen for better randomness than stock lower-effort stuff

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
    return (userGuess == correctNumber);
}

int main()
{
    constexpr int guessCount{7};
    do
    {
        const int randNum{Random::get(1, 100)};
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
        
        int currentGuess{1};
        //Ask the user to input a guess
        for(int i{1}; i<=guessCount; ++i)
        {
            std::cout << "Guess #" << i << ": ";
            int userGuess{0};
            std::cin >> userGuess;
            bool isGuessCorrect = checkUserGuess(userGuess, randNum);
            if(isGuessCorrect)
            {
                std::cout << "Correct! You win!\n";
                break;
            }
            else
            {
                if(userGuess < randNum)
                {
                    std::cout << "Your guess is too low. Try again\n";
                }
                else
                {
                    std::cout << "Your guess is too high. Try again\n";
                }
            }
            if(i==7)
            {
                std::cout <<"Sorry, you lose. The correct number was " << randNum <<'\n';
            }
        }
    } while (playAgain());
    
}
