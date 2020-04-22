//
//  zad3.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
using namespace std;
int main()
{   double large=0,small=0,sum =0, value, number=0;
    string unit;
    vector<double> past;
    bool set_once = true;
    cout<< "please enter a lengh value followed by unit (cm, m, in, ft)"<< endl;
    while(cin >> value>> unit)
    {
        if(set_once) { small  = value; set_once = false;}
        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft" )
        {
            cout << "wrong unit" << endl;
            break;
        }
        if (unit == "cm") value = value/100;
        if (unit == "in") value = value/(100*2.54);
        if (unit == "ft") value =value/(100*12*2.54);
        if (value > large) large=value;
        if (value < small) small = value;
        sum += value;
        number +=1;
        past.push_back(value);
    }
    cout<< "number of all values"<< number<< endl;
    cout << "summ of all values"<< sum << "m"<< endl << "the smallest number: "<< small << endl << "the largest number: "<< large << endl;
    sort(past);
    cout << "every number u've entered"<< endl;
    for (int i=0; i<past.size();i++)
    {
        cout<< past[i]<<" ";
    }
    
    return 0;
}
