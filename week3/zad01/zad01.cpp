//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 17/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
////Write a program using a single file containing three namespaces X, Y, and Z so that the following main() works correctly:Each namespace needs to define a variable called var and a function called
////print() that outputs the appropriate var using cout.



#include "std_lib_facilities.hpp"
namespace X
{
int var;
void print() {cout<<var<<endl;}
}
namespace Y
{
int var;
void print() {cout<<var<<endl;}
}
namespace Z
{
int var;
void print() {cout<<var<<endl;}
}
int main() {
X::var = 7;
X::print(); // print X’s var
using namespace Y;
var = 9;
print(); // print Y’s var
{
using Z::var;
using Z::print;
var = 11;
print();
}
print();
X::print();
}
