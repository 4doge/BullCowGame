#include "FBullCowGame.hpp"

using int32 = int;

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 5;
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}

int32 FBullCowGame::GetMaxTries() const {
    return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTry() const {
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
    return 0;
}

bool FBullCowGame::CheckGuessValidity(FString) {
    return 0;
}

FBullCowGame::FBullCowGame() {
    Reset();
}

