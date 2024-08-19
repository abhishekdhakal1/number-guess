# Guess The Number Game

Welcome to the **Guess The Number** game! This is a simple C++ game where the player must guess a randomly generated number within a limited number of tries.

## Features

- The game sets a random number within a range (e.g., 1-100).
- The player is allowed a fixed number of attempts (default: 5).
- After each guess, the game provides feedback:
  - "Too high" if the guess is greater than the target number.
  - "Too low" if the guess is lower than the target number.
  - "Correct" if the player guesses the number.
- The game ends when the player either guesses the number or runs out of attempts.

## How to Play

1. The game will prompt you to guess a number within a specified range.
2. Enter your guess.
3. Based on your input, the game will guide you on whether to guess higher or lower.
4. You have a limited number of attempts to guess correctly.
5. If you guess the number correctly within the allowed tries, you win!

## Getting Started

### Prerequisites

- You need a C++ compiler to build and run this program (e.g., GCC, Clang, MSVC).

### Building and Running the Game

1. Clone this repository or download the source files.
2. Ensure the files `main.cpp` and `GuessTheNumber.h` (along with any other necessary files) are in the same directory.
3. Compile the code using a C++ compiler. For example:

    ```bash
    g++ main.cpp -o GuessTheNumber
    ```

4. Run the game:

    ```bash
    ./GuessTheNumber
    ```

### Example Gameplay

