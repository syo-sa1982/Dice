//
//  Dice.cpp
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//

#include "Dice.h"

Dice::Dice() : totalRolls(0), totalScore(0)
{
}

void Dice::roll(int sarFace, int rollCount)
{
    cout << "sarFaceRoll : " << sarFace << endl;
    cout << "rollCount : " << rollCount << endl;
    
    // 振った回数
    totalRolls = rollCount;
    for (int i = 0; i < rollCount; i++) {
        // 出目履歴出
        rollHistory.push_back((arc4random() % sarFace) + 1);
        cout << "rollHistory : " << rollHistory[i] << endl;
        // 出目合計値
        totalScore += rollHistory[i];
    }
}

void Dice::display()
{
    cout << "TotalRolls : " << totalRolls << endl;
    cout << "TotalScore : " << totalScore << endl;
}

int Dice::getRollResult()
{
    return totalScore;
}

vector<int> Dice::getRollHistory()
{
    return rollHistory;
}

void Dice::reset()
{
    rollHistory.clear();
    totalRolls = 0;
    totalScore = 0;
}


