//
//  zad05c.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
struct Record{
    double unit_price;
    int units;
};
double price(double v, const Record& r)
{
    return v + r.unit_price*r.units;
}
void f(const vector<Record>& vr)
{
    double total = accumulate(vr.begin(), vr.end(),0.0, price);
    cout << total << endl;
}
int main()
{
    vector<Record> v(4);
    v[0].unit_price = 2.5;
    v[0].units = 5;
    v[1].unit_price = 1;
    v[1].units = 2;
    v[2].unit_price = 5;
    v[2].units = 1;
    v[3].unit_price = 3;
    v[3].units = 15;
    f(v);
    return 0;
}

