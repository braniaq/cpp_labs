//  zad02f.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
template<typename Iter>
void advance(Iter& p, int n)
{
    if(n<0)
    {
        while(n<0)
        {
            --p;
            ++n;
        }
    }
    else
    while(0<n)
    {
        ++p;
        --n;
    }
}
int main()
{
    vector<int> v{1,2,3,4,5,6};
    auto p = v.end()-1;
    cout << *p << endl;
    advance(p, -3);
    cout << *p << endl;
    return 0;
}
