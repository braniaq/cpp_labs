//
//  zad02h.cpp
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
    T a = arr;
}
int main()
{
    array<int, 5> a{1,2,3,4,5};
    vector<int> v{1,2,3,4,5};
    list<int> l = {1,2,3,4,5};
    printer(a);
    printer(v);
    printer(l);
    return 0;
}
