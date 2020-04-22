//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 10/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
/*
#include "std_lib_facilities.hpp"
using namespace std;
string print_vec(vector<int> p, int n)
{   string text= "";
    for(int i=0; i<n;i++)
    {
        text +=to_string(p[i]) + " ";
    }
    return text;
}
int main()
{   int n = 1, tmp, sum=0;
    vector<int> v;
    cout << "Please enter the number of values you want to sum:" << endl;
    cin >> n;
    cout << "Please enter some integers (press '|' to stop):" << endl;
    while(cin>> tmp)
    {
        if (tmp == '|') break;
        v.push_back(tmp);
    }
    for(int i = 0; i< n ;i++)
    {
        sum += v[i];
    }
    cout << "The sum of the first " <<n<< " numbers ("<< print_vec(v, n) << ") is "<< sum<< endl;
    return 0;
}
*/
