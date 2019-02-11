#include "FBullCowGame.hpp"

using int32 = int;

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 5;
    const FString HIDDEN_WORD = "planet";
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
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

bool FBullCowGame::CheckGuessValidity(FString) const {
    return 0;
}

FBullCowGame::FBullCowGame() {
    Reset();
}

FBullCowCount FBullCowGame::SubmitGuess(FString Guess) {
    MyCurrentTry++;
    FBullCowCount BullCowCount;
    
    int32 HiddenWordLength = MyHiddenWord.length();
    for (int32 HiddenWordChar = 0; HiddenWordChar < HiddenWordLength; HiddenWordChar++) {
        for (int32 GuessChar = 0; GuessChar < HiddenWordLength; GuessChar++) {
            if (Guess[GuessChar] == MyHiddenWord[HiddenWordChar]) {
                if (HiddenWordChar == GuessChar) {
                    BullCowCount.Bulls++;
                } else {
                    BullCowCount.Cows++;
                }
            }
        }
    }
    
    return BullCowCount;
}

int32 FBullCowGame::GetHiddenWordLength() const {
    return MyHiddenWord.length();
};



