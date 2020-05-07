//
//  zad02b.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
double* high(double* first, double* last)
{
    double h = *first;  // it should not be -1
    double* high;
    for(double* p = first; p!=last; ++p) // we do not check if first is smaller than last
        if (h<*p) { high = p; h = *p; }
    return high;
}
int main()
{
    return 0;
}
