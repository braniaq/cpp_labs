//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
// The function arguments f for a.apply(f) and apply(f,a) are different. Write a triple() function for each and use each to triple the elements of an array { 1 2 3 4 5 }. Define a single triple() function that can be used for both a.apply(triple) and apply(triple,a). Explain why it could be a bad idea to write every function to be used by apply() that way.

#include "std_lib_facilities.hpp"
#include "Matrix.h"
#include "MatrixIO.h"
#include <cmath>
#include <complex>
using namespace std;
void triple1(int& e)
{
    e *= 3;
}
int triple2(int& e)
{
    return e*3;
}
int triple3(int& e)
{
    e*=3;
    return e;
}
int main()
{
    Numeric_lib::Matrix<int> a(5);
    for(int i = 1;i<6;i++)
        a[i-1] = i;
    cout << a << endl;
    a.apply(triple1);
    cout << a << endl;
    a = Numeric_lib::apply(triple2, a);
    cout << a << endl;
    a.apply(triple3);
    cout <<a << endl;
    return 0;
}
