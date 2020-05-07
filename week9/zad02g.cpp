//
//  zad02g.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
template<typename T>
void printer(T arr)
{   string tmp ="";
    for(char c : arr)
        tmp+=c;
    cout << tmp.size() << endl;
    if(tmp == "hello")
        cout << "equal"<< endl;
    if(tmp < "howdy")
    {
        for(char c : tmp)
            cout<< c;
        cout << endl;
    }
    else {
        cout << "HOWDY" << endl;
    }
    T a = arr;
}
int main()
{
    vector<char> v{'h','e','l','l','o'};
    string s = "hello";
    list<char> l = {'h','e','l','l','o'};
    printer(v);
    printer(s);
    printer(l);

    return 0;
}
