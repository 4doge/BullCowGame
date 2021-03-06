#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

#endif

using FString = std::string;
using int32 = int;

struct FBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};


class FBullCowGame {

public:
    FBullCowGame();
    
    void Reset();
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString) const;
    FBullCowCount SubmitGuess(FString);
    

private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
    
};
