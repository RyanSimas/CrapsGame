//
// Created by Ryan Simas on 2/21/2020.
//
#include <iostream>
#include "die.h"

int score = 0;              //initializes scoreboard to 0 at beginning of game;
int bank = 100;

bool isWin(int playerRoll)
{
    bool win;
    int roll1 = playerRoll;
    int roll2;
    if((roll1 == 7) || (roll1 == 11))
    {
        win = true;
    }
    else if((roll1 == 2) || (roll1 == 3) || (roll1 == 12))
    {
        win = false;
    }
    else
    {
        if(roll1 = roll2)
        {
            win == true;
        } else
        {
            win == false;
        }
    }
    return win;
}

int bet(int betAmount)
{
    bool valid;
    while(valid == false)
    {
        if(betAmount > bank)
        {
            std::cout << "You don't have that much bank to bet at this time. Place a smaller bet" << std::endl;
            valid = false;
        }
        else
        {
            valid = true;
            if(isWin() == true)
            {
                bank += betAmount;
            }
            else
            {
                bank -= betAmount;
            }
        }
    }
    return bank;
}

int scoreboard()    //keeps track of wins and losses
{
    if(isWin() == true)
    {
        score++;     //adds one to the score if the player wins
    }
    else
    {
        score--;     //subtracts one from the score if player loses
    }
    return score;
}