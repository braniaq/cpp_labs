//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 11/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Does dot (.) match '\n'? Write a program to find out.

#include "std_lib_facilities.hpp"
#include <regex>

int main() {
    regex pattern{R"(\.)"};
    string s = "\n";
    smatch matches;
    if(regex_search(s, matches, pattern))
        for(auto elem : matches)
            cout << elem << endl;
    else
        cout << "it does not" << endl;
}
