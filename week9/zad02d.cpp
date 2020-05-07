//
//  zad02d.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
template<typename Iterator>
Iterator high(Iterator first, Iterator last)
{
    Iterator high;
    high = first;
for (Iterator p = first; p!=last; ++p)
    if (*high<*p)
        high = p;
return high;
}

int main()
{
    return 0;
}
