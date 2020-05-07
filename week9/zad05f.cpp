//
//  zad05f.cpp
//  ojp
//
//  Created by Jakub Branicki on 04/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
int main()
{   ostream_iterator<string> ooo{cout};
    *ooo = "Hello, ";
    ++ooo;
    *ooo = "World!\n";
    string from = "words.txt", to = "dictonary.txt";
    ifstream is {from};
    ofstream os {to};
    istream_iterator<string> ii {is};
    istream_iterator<string> eos;
    ostream_iterator<string> oo {os,"\n"};
    vector<string> b {ii,eos};
    sort(b.begin() ,b.end());
    copy(b.begin() ,b.end() ,oo);
    vector<string> bb(100);
    copy(ii,eos,bb.begin());
    for ( string el : bb)
        cout << el << endl;
    return 0;
}
