//
//  Dice.h
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//

#ifndef __Dice__Dice__
#define __Dice__Dice__

#include <cstdlib>
#include <vector>
#include <iostream>

//using namespace std;

// 面数
enum kSurface
{
    kTetrahedral = 4,
    kHexahedral = 6,
    kOctahedral = 8,
    kIcosahedron = 10,
    kDodecahedron = 12
};

// 投げる回数
enum kRollCount
{
    kDefaultRoll = 1
};

class Dice
{
public:
    // コンストラクタ
    Dice();
    // ダイスロール
    // RollCount D Surface (例：3D6 6面ダイスを3回)
    void roll(int Surface = kHexahedral, int RollCount = kDefaultRoll);
    // 出目表示
    void display();
    // 出目リセット
    void reset();
    // 出目合計取得
    int getRollResult();
    // 出目履歴取得
    std::vector<int> getRollHistory();
    
private:
    // 履歴
    std::vector<int> rollHistory;
    // 振った回数
    int totalRolls;
    // 出目合計
    int totalScore;
};
#endif /* defined(__Dice__Dice__) */
