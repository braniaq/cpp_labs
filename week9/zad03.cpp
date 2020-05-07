//
//  zad03.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//11. Given a list<int> as a (by-reference) parameter, make a vector<double> and copy the elements of the list into it. Verify that the copy was complete and correct. Then print the elements sorted in order of increasing value.

#include "std_lib_facilities.hpp"
void d(list<int>& l)
{
    vector<double> v(l.size());
    copy(l.begin(), l.end(), v.begin());
    int i = 0;
    for (double elem : l)
    {
        if(elem != v[i])
            cout << "error" << endl;
        i++;
    }
    sort(v.begin(), v.end());
    for(double elem : v)
        cout << elem <<endl;
}
int main()
{   list<int> l = {1,6,4,1,2,3};
    d(l);
    return 0;
}
