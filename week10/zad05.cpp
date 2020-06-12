//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 11/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Modify the program from §23.8.7 so that it takes as inputs a pattern and a file name. Its output should be the numbered lines (line–number: line) that contain a match of the pattern. If no matches are found, no output should be produced.

#include "std_lib_facilities.hpp"
#include <regex>

int main() {
    regex pattern;
    string pat;
    cout << "enter pattern: ";
    getline(cin,pat); // read pattern
    try {
        pattern = pat; // this checks pat
        cout << "pattern: " << pat << '\n';
    }
    catch (exception e) {
        cout << pat << " is not a valid regular expression\n";
        exit(1); }
    cout << "now enter filename:\n";
    string filename;
    cin >> filename;
    ifstream ist {filename};
    if (!ist) cerr << "no file\n";
    int lineno = 0;
    for (string line; getline(ist,line); ) {
        ++lineno;
        smatch matches;
    if (regex_search(line, matches, pattern)) {
        cout << "line " << lineno << ": ";
        for (int i = 0; i<matches.size(); ++i)
            cout << matches[i] << '\n';
    }
        
    }
}
