//
//  zad05e.cpp
//  ojp
//
//  Created by Jakub Branicki on 19/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
template<typename T> void print(T i) { cout << i << '\t'; } void print(char i) { cout << int(i) << '\t'; }
void print(signed char i) { cout << int(i) << '\t'; }
void print(unsigned char i) { cout << int(i) << '\t'; }

int main()
{
    int si = 257;
    char c = si;
    unsigned char uc = si;
    signed char sc = si;
    print(si);
    print(c);
    print(uc);
    print(sc);
    cout << '\n';
    si = 129;
    c = si;
    uc = si;
    sc = si;
    print(si); print(c); print(uc); print(sc);
    return 0;
}
