//
//  main.cpp
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//
//#include <ctime> // for time()
//#include <cstdlib> // for srand(), rand()
//#include <iostream>
//using namespace std;
//
//#define MIN 10
//#define MAX 21

#include "Dice.h"

int main()
{
    // 実行サンプル的な
    
    Dice MyDice;
    // デフォルト（6面ダイス）
    MyDice.Roll();
    MyDice.Display();
    MyDice.Roll();
    MyDice.Display();
    MyDice.Roll();
    MyDice.Display();
    // リセット
    MyDice.Reset();
    MyDice.Display();
    
    // 10面ダイス
    MyDice.Roll(10);
    MyDice.Display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    MyDice.Reset();
    
    // 8面ダイス
    MyDice.Roll(8);
    MyDice.Display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    
    
    return 0;
}