//
// Created by Ryan Simas on 2/21/2020.
//

#ifndef CRAPSGAME_DIE_H
#define CRAPSGAME_DIE_H

#include <string>

class Die {
private:
    int numberOfSides;
    int increment;
    int value;
    std::string color;
    bool isSymbols;
    std::string material;
    int startingValue;
public:
    Die (int startingNumberOfSides, int startingIncrement, int startingStartingValue, std::string startingColor, bool startingIsSymbols, std::string startingMaterial);
    int roll();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setStartingValue(int newStartingValue);
    int getStartingValue();
    void setValue(int newValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    void setIsSymbol(bool newIsSymbol);
    bool isSymbol();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();
};

#endif //CRAPSGAME_DIE_H
