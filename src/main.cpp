//
//  main.cpp
//
//
//  Created by Matthew Nanney on 5/6/14.
//
//

#include "main.h"
#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    bool shieldsUp;
    short lives, aliensKilled;
    score = 0;
    distance = 1200.76;
    char playAgain = y;
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;
    cout << "\nscore: ";
    cout << "distance: ";
    cout << "playAgain: ";
    //skipping shieldsUp since you don’t generally print Boolean values cout << "lives: " << lives << endl;
    cout << "aliensKilled: "<< aliensKilled << endl; cout << "engineTemp: " << engineTemp << endl;
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    typedef unsigned short int ushort; ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
    return 0;
}