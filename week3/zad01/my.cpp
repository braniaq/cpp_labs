//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 17/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.


#include "my.hpp"
#include "std_lib_facilities.hpp"
int foo;
void print_foo()
{
     std::cout<< foo << endl;
}
void print(int i)
{
    std::cout << i << endl;
}
void swap_v(int a,int b)
{ int temp; temp = a, a=b; b=temp; }
void swap_r(int& a,int& b)
{ int temp; temp = a, a=b; b=temp; }
//void swap_cr(const int& a, const int& b)
//{ int temp; temp = a, a=b; b=temp; } próba zamiany zmiennej const
