//
//  zad03.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include "Matrix.h"
#include "MatrixIO.h"
using namespace std;

struct triple1
{
    int operator()(int& e)
    {
        return e*3;
    }
};
struct triple2
{
    void operator()(int& e)
    {
        e *=3;
    }
};
struct triple3
{
    int operator()(int& e)
    {
        e *=3;
        return e;
    }
};
int main()
{

    Numeric_lib::Matrix<int> a(5);
        for(int i = 1;i<6;i++)
            a[i-1] = i;
        cout << a << endl;
        a = apply(triple1(),a);
        cout << a << endl;
        a.apply(triple2());
        cout <<a << endl;
        a = a.apply(triple3());
        cout << a << endl;
    return 0;
}
