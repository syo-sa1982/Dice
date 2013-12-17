//
//  Dice.cpp
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//

#include "Dice.h"

Dice::Dice() : LastRoll(0), TotalRolls(0), TotalScore(0)
{
    //
    srand(static_cast<unsigned int>(time(0)));

}

void Dice::Roll()
{
    LastRoll = 0;
    TotalRolls++;
    
    // 乱数取得
    LastRoll = (rand() % 6) + 1;
    
    TotalScore += LastRoll;
}
void Dice::Roll(int sarFace)
{
    LastRoll = 0;
    TotalRolls++;
    
    // 乱数取得
    LastRoll = (rand() % sarFace) + 1;
    
    TotalScore += LastRoll;
}

void Dice::Display()
{
    cout << "LastRoll : " << LastRoll << endl;
    cout << "TotalRolls : " << TotalRolls << endl;
    cout << "TotalScore : " << TotalScore << endl << endl;
}

int Dice::getRollResult()
{
    return TotalScore;
}

void Dice::Reset()
{
    LastRoll = 0;
    TotalRolls = 0;
    TotalScore = 0;
}


