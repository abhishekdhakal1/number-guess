#include <iostream>

using namespace std;

class GuessTheNumber
{
private:
    const int maxTries;
    int numberToGuess;
    int tries;

public:
    GuessTheNumber(int maxTries);
    void startGame();
};
