//
//  zad4.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
using namespace std;
int main()
{   char answer, computer_choice,tmp;
    vector<char> computer;
    cout << " please enter random series of characters 'r', 's' or 'p' (every time followed by ENTER). Enter '|' to break"<< endl;
    while(true){
        cin>> tmp;
        if (tmp == '|') { break;}
        computer.push_back(tmp);
    }
    cout << " LETS PLAY R, P, S. enter your answer as 'r' for rock, 'p' for paper and 's' for scissors"<< endl;
    for(int j = 0; j< computer.size();j++)
    {
        computer_choice = computer[j];
    cin>> answer;
    switch (answer) {
        case 'r':
            if (computer_choice == 'r') {cout << "DRAW\n"; }
            if (computer_choice == 's') {cout << "I LOST\n"; }
            if (computer_choice == 'p') {cout << "I WON\n"; }
            break;
        case 'p':
            if (computer_choice == 'p') {cout << "DRAW\n"; }
            if (computer_choice == 'r') {cout << "I LOST\n"; }
            if (computer_choice == 's') {cout << "I WON\n"; }
            break;
        case 's':
            if (computer_choice == 's') {cout << "DRAW\n"; }
            if (computer_choice == 'p') {cout << "I LOST\n"; }
            if (computer_choice == 'r') {cout << "I WON\n"; }
            break;
        default:
            break;
    }
    }
    return 0;
}
