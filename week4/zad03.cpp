//
//  zad03.cpp
//  ojp
//  Created by Jakub Branicki on 24/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

// Write a program that produces the sum of all the white space-separated integers in a text file.
//For example, bears: 17 elephants 9 end should out- put 26.

#include "std_lib_facilities.hpp"
int main()
{   ifstream ist{"sum.txt"};
    int n,sum =0;
    while (true) {
        if(ist >> n)
        {
            sum +=n;
        }
        else if(ist.fail())
            {
                ist.clear();
                string tmp;
                ist >>tmp;
            }
        if(ist.eof()) break;
    }
    cout << sum <<endl;
    return 0;
}
