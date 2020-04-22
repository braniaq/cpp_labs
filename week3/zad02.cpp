//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 16/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
//7. Read five names into a vector<string> name, then prompt the user for the ages of the people named and store the ages in a vector<double> age. Then print out the five (name[i],age[i]) pairs. Sort the names (sort(name .begin(),name.end())) and print out the (name[i],age[i]) pairs. The tricky part here is to get the age vector in the correct order to match the sorted name vector. Hint: Before sorting name, take a copy and use that to make a copy of age in the right order after sorting name. Then, do that exercise again but allowing an arbitrary number of names.

#include "std_lib_facilities.hpp"

using namespace std;

int mainz()
{
    vector<string> name, name_copy;
    vector<double>age, age_copy;
    string tmp;
    int i=0;
    while(true)
    {
        cout<< " please enter "<< i+1 << " name. Enter '|' to break \n";
        cin>>tmp;
        if( tmp == "|") break;
        name.push_back(tmp);
        i++;
    }
    for(int j = 0; j<name.size(); j++)
    {   double number;
        cout<< " please enter "<< name[j] << " age\n";
        cin >> number;
        age.push_back(number);
    }
    name_copy = name;
    age_copy = age;
    for(int p = 0; p<name.size(); p++)
    {
        cout<< name[p]<<" "<< age[p] << " yo\n";
    }
    sort(name.begin(),name.end());
    for (int k = 0; k<name.size();k++)
    {
        for(int l = 0; l<name.size();l++)
        {
            if(name[k]==name_copy[l])
            {
                age[k] = age_copy[l];
            }
        }
    }
    cout << endl;
    for(int p = 0; p<name.size(); p++)
    {
        cout<< name[p]<<" "<< age[p] << " yo\n";
    }
    return 0;
}
