//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 17/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.


#include "my.hpp"
int main()
{
    foo = 7;
    print_foo();
    print(99);
    int x = 7;
    int y =9;
    swap_v(x,y);
    //swap_r(7,9); int nie ma miejsca w pamieci
    const int cx = 7;
    const int cy = 9;
    //swap_cr(cx,cy);
    swap_v(7.7,9.9);
    double dx = 7.7;
    double dy = 9.9;
    //swap_cr(dx,dy); opis w my.cpp
    //swap_r(7.7,9.9); double
    return 0;
}

