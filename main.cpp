#include <iostream>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;

int main() {
    std::cout << BCGame.GetCurrentTry();
    PrintIntro();
    do {
        PlayGame();
    }
    while (AskToPlayAgain());
    return 0;
}

void PrintIntro() {
    constexpr int32 WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows." << std::endl;
    std::cout << "Guess the " << WORD_LENGTH << " letter isogram." << std::endl;
    return;
}

void PlayGame() {
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    for (int32 i = 0; i < MaxTries; i++) {
        FText Guess = GetGuess();
        std::cout << "Your guess: " << Guess << std::endl;
    }
}

FText GetGuess() {
    FText Guess = "";
    std::cout << "Guess #" << BCGame.GetCurrentTry() << ". Enter your guess: ";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Play again? (y/n) ";
    FText Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y' || Response[0] == 'Y');
}
