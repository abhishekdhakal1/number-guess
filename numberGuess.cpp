#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessTheNumber
{
private:
    const int maxTries;
    int numberToGuess;
    int tries;

public:
    GuessTheNumber(int maxTries)
        : maxTries(maxTries), tries(0)
    {
        srand(static_cast<unsigned>(time(0)));
        numberToGuess = rand() % 100 + 1;
    }

    void startGame()
    {
        int userGuess;
        cout << "Welcome to Guess the Number!" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;

        while (tries < maxTries)
        {
            cout << "Enter your guess: ";
            cin >> userGuess;

            if (userGuess < numberToGuess)
            {
                cout << "Too low!" << endl;
            }
            else if (userGuess > numberToGuess)
            {
                cout << "Too high!" << endl;
            }
            else
            {
                cout << "Congratulations! You guessed the number." << endl;
                return;
            }

            tries++;
            cout << "Attempts left: " << maxTries - tries << endl;
        }

        if (tries == maxTries)
        {
            cout << "Sorry! You've used all your attempts. The number was " << numberToGuess << "." << endl;
        }
    }
};

int main()
{
    const int maxTries = 5;

    GuessTheNumber game(maxTries);
    game.startGame();

    return 0;
}
