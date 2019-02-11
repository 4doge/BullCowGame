#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

#endif

using FString = std::string;
using int32 = int;

class FBullCowGame {

public:
    FBullCowGame();
    
    void Reset();
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString);
    

private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    
};
