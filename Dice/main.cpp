//
//  main.cpp
//  Dice
//
//  Created by 藤井 陽介 on 2013/12/13.
//  Copyright (c) 2013年 syo-sa. All rights reserved.
//

#include "Dice.h"

int main()
{
    // 実行サンプル的な
    
    Dice MyDice;
    // デフォルト（6面ダイス）
    cout << "===========================" << endl;
    MyDice.roll();
    MyDice.display();
    MyDice.roll();
    MyDice.display();
    MyDice.roll();
    MyDice.display();
    // リセット
    MyDice.reset();
    MyDice.display();
    
    cout << "10面===========================" << endl;
    // 10面ダイス
    MyDice.roll(kIcosahedron);
    MyDice.display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    MyDice.reset();
    
    cout << "8面===========================" << endl;
    // 8面ダイス
    MyDice.roll(kOctahedral);
    MyDice.display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    MyDice.reset();
    
    cout << "10D10===========================" << endl;
    // 10D10
    MyDice.roll(kIcosahedron,10);
    MyDice.display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    MyDice.reset();
    
    cout << "3D6===========================" << endl;
    // 3D6
    MyDice.roll(kHexahedral,3);
    MyDice.display();
    // 合計値を取得
    cout << "合計値 : " << MyDice.getRollResult() << endl;
    MyDice.reset();
    
    return 0;
}