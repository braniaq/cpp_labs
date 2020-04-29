//
//  zad03.cpp
//  ojp
//
//  Created by Jakub Branicki on 25/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Consider the memory layout in §17.4. Write a program that tells the order in which static storage, the stack, and the free store are laid out in memory. In which direction does the stack grow: upward toward higher addresses or downward toward lower addresses? In an array on the free store, are elements with higher indices allocated at higher or lower addresses?

#include "std_lib_facilities.hpp"
int a,b;
int main()
{
    int c,d;
    int* p = new int[3];
    int* aa = &a;
    int* bb  =&b;
    int* cc = &c;
    int* dd = &d;
    vector<string> order;

    if(aa < cc && aa<p){
        cout << "STATIC"<<endl;
        if(cc>p)
            cout << "FREE STORE\n" << "STACK\n";
        else
            cout << "STACK\n" << "FREE STORE\n";
    }
    if(aa > cc && p > cc){
    cout << "STACK"<<endl;
    if(aa>p)
        cout << "FREE STORE\n" << "STATIC STORE\n";
    else
        cout << "STATIC STORE\n" << "FREE STORE\n";
    }
    if(aa > p && cc > p){
    cout << "FREE STORE"<<endl;
    if(aa>cc)
        cout << "STATIC STORE\n" << "STACK\n";
    else
        cout << "STACK\n" << "STATIC STORE\n";
    }
    cout << endl;
    if(aa < bb)
        cout << "static up\n";
    else
        cout << "static down\n";

    if(p < p+1)
        cout << "free store up\n";
    else
        cout << "free store down\n";

    if(cc < dd)
        cout << "stack up\n";
    else
        cout << "stack down\n";

    return 0;
}
