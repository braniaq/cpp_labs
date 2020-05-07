//
//  zad02c.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
void copy(int* f1, int* e1, int*f2)
{
    while(f1 != e1)
    {
        *f2 = *f1;
        ++f1;
        ++f2;
    }
}

int main()
{
    array<int, 8> a{1,2,34,5,6,7,8,9};
    array<int, 8> b;
    for(int elem : a)
        cout << elem<<endl;
    copy(a.begin(),a.end(),b.begin());
    cout << endl;
    for(int elem : b)
        cout << elem << endl;
    return 0;
}
