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

string playername;
int playerscore;
int times;


int main()
{
    startgame()
    playerscore = 0;
    times = 10;
    cout<<"Please enter your player name:"<<endl;
    getline (cin,playername);
    
    cout<<"Thank you, "<<playername<<endl;
    cout<<endl;
    cout<<"Please enter numbers"<<endl;
    int numbers;
    
    while (times > 0)
    {
        cin>>numbers;
        cout<<endl;
        
        if (numbers >= 5)
        {
            playerscore += 2;
        }
        else
        {
            playerscore +=1;
        }
        times --;
        cout<<"Your score is: "<<playerscore<<endl;
    }
}

startgame()
{
    loadCompanylogo();
    loadEnginelogo();
}

loadCompanylogo(){
    cout<<companylogo.mov;
    
    
}

/*
int startgame()
{
    playerscore = 0;
    time = 100;
    cout<< "Please enter your player name:"<<endl;
    cin>>playername;
    
}
*/
