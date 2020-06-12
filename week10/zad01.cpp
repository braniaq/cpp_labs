//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 08/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include <regex>
using namespace std;

int main()
{
    ifstream in {"file.txt"};
    if (!in) cerr << "no file\n";
    regex pat {R"(\w{2}\s*\d{5}(–\d{4})?)"};
    int lineno = 0;
    for (string line; getline(in,line); )
    {
        ++lineno;
        smatch matches;
        if (regex_search(line, matches, pat))
            cout << lineno << ": " << matches[0] << '\n';
    }
    return 0;
}
