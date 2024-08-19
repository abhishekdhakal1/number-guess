#include "GuessTheNumber.h"

int main()
{
    const int maxTries = 5;

    GuessTheNumber game(maxTries);
    game.startGame();

    return 0;
}
