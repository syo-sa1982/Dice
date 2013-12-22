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

void Dice::roll(int surface, int rollCount)
{
    std::cout << "surfaceRoll : " << surface << std::endl;
    std::cout << "rollCount : " << rollCount << std::endl;
    
    // 振った回数
    this->totalRolls = rollCount;
    for (int i = 0; i < rollCount; i++) {
        // 出目履歴出
        this->rollHistory.push_back((arc4random_uniform(surface)) + 1);
//        this->rollHistory.push_back((arc4random() % surface) + 1);
        std::cout << "rollHistory : " << this->rollHistory[i] << std::endl;
        // 出目合計値
        this->totalScore += this->rollHistory[i];
    }
    
}

void Dice::display()
{
    std::cout << "TotalRolls : " << this->totalRolls << std::endl;
    std::cout << "TotalScore : " << this->totalScore << std::endl;
}

void Dice::reset()
{
    rollHistory.clear();
    totalRolls = 0;
    totalScore = 0;
}


