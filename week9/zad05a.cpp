//
//  zad05a.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
template<typename In, typename T>
In find1(In first, In last, const T& val)
{
    while (first!=last && *first != val)
        ++first;
        return first;
}

template<typename In, typename T>
In find2(In first, In last, const T& val)
{
for (In p = first; p!=last; ++p)
    if (*p == val) return p;
    return last;
}
#include "std_lib_facilities.hpp"

int main()
{
    vector<int> i{1,2,3,4,5,6,710,11, 12, 13};
    vector<int> :: iterator p1 = find1(i.begin(),i.end(), 710);
    vector<int> :: iterator p2 = find2(i.begin(),i.end(), 710);
    vector<double> d{15.5,2,3,4.42,5,6,70,11, 12, 13};
    vector<double> :: iterator p3 = find1(d.begin(),d.end(), 700);
    vector<double> :: iterator p4 = find2(d.begin(),d.end(), 700);
    vector<string> s {"bla bla", "DOMINUM",  "karolum", "posciel", "word"};
    vector<string> :: iterator p5 = find1(s.begin(),s.end(), "posciel");
    vector<string> :: iterator p6 = find2(s.begin(),s.end(), "posciel");
    cout << *p1 << endl;
    cout  << *p2 << endl;
    cout << *p3 << endl;
    cout << *p4 << endl;
    cout << *p5 << endl;
    cout << *p6 << endl;
    return 0;
}

