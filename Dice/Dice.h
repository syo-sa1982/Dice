//
//  Dice.h
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//

#ifndef __Dice__Dice__
#define __Dice__Dice__

#include <ctime> // for time()
#include <cstdlib> // for srand(), rand()
#include <iostream>

using namespace std;

class Dice
{
public:
    // コンストラクタ
    Dice();
    // ダイスロール
    void Roll();
    // 面数指定
    void Roll(int SarFace);
    // RollCount D SarFace (例：3D6 6面ダイスを3回)
    void Roll(int RollCount, int SarFace);
    // 出目表示
    void Display();
    // 出目リセット
    void Reset();
    
    // 出目取得関数
    int getRollResult();
    
private:
    // ダイスの仕様
    int SarFace;
    int RollCount;
    
    // 結果
    int LastRoll;
    int TotalRolls;
    int TotalScore;
};
#endif /* defined(__Dice__Dice__) */
