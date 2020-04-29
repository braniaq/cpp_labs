//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 25/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
//2. Write a template function that takes a vector<T> vt and a vector<U> vu as arguments and returns the sum of all vt[i]*vu[i]s.

#include "std_lib_facilities.hpp"
template<typename T, typename U>
double sum(vector<T> vt, vector<U> vu)
{
    double sum=0;
    if(vt.size()>vu.size())
    {
        for(int i = 0; i<vt.size();i++)
        {
            if(i-1>=vu.size())
                sum+=vt[i];
            else
                sum+=vt[i]*vu[i];
        }
    }
    if(vt.size()<=vu.size())
    {
        for(int i = 0; i<vu.size();i++)
        {
            if(i-1>=vt.size())
                sum+=vu[i];
            else
                sum+=vt[i]*vu[i];
        }
    }
    return sum;
}
int main()
{
    vector<int> a{1,2,3,4,5};
    vector<double> b{3.5,2.1,1.41,4.1,4.5};
    cout << sum(a,b) <<endl;

    return 0;
}
