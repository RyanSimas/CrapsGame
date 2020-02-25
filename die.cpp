//
// Created by Ryan Simas on 2/21/2020.
//

#include "die.h"
#include <random>
#include <ctime>

Die :: Die(int startingNumberOfSides, int startingIncrement, int startingStartingValue, std::string startingColor, bool startingIsSymbols, std::string startingMaterial)
{
    srand(time(0));
    numberOfSides = startingNumberOfSides;
    increment = startingIncrement;
    color = startingColor;
    isSymbols = startingIsSymbols;
    material = startingMaterial;
    startingValue = startingStartingValue;
}
int Die:: roll()
{
    value = (rand() % numberOfSides) + startingValue;
    return value;
}
void Die:: setNumberOfSides(int newNumberOfSides)
{
    numberOfSides = newNumberOfSides;
}
int Die:: getNumberOfSides()
{
    return numberOfSides;
}
void Die:: setIncrement(int newIncrement)
{
    increment = newIncrement;
}
int Die:: getIncrement()
{
    return increment;
}
void Die:: setStartingValue(int newStartingValue)
{
    startingValue = newStartingValue;
}
int Die:: getStartingValue()
{
    return startingValue;
}
void Die:: setValue(int newValue)
{
    value = newValue;
}
int Die:: getValue()
{
    return value;
}
void Die:: setColor(std::string newColor)
{
    color = newColor;
}
std::string Die:: getColor()
{
    return color;
}
void Die:: setIsSymbol(bool newIsSymbol)
{
    isSymbols = newIsSymbol;
}
bool Die:: isSymbol()
{
    return isSymbols;
}
void Die:: setMaterial(std::string newMaterial)
{
    material = newMaterial;
}
std::string Die:: getMaterial()
{
    return material;
}