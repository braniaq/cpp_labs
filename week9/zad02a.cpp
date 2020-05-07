//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
// do every "try this" from this chapter

#include "std_lib_facilities.hpp"
vector<double>* get_from_jill()
{
    vector<double> v{1,5,2,325,6,7,2,3,4,6};
    vector<double>* p = &v;
    return p;
}
void fct() {
    vector<double>* jill_data = get_from_jill();
    double h = -1;
    double* jill_high;
    vector<double>& v = *jill_data;
    for (int i=0; i<v.size(); ++i)
        if (h<v[i]) {
            jill_high = &v[i];
            h = v[i]; }
    cout << "Jill's max: " << *jill_high;
    delete jill_data;
    }
int main()
{
    fct();
    return 0;
}
