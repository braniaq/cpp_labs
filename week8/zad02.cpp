//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 25/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
//a. Define a local vector<int> lv with the same number of elements as the argument vector.
//b. Copy the values from gv into lv.
//c. Print out the elements of lv.
//d. Define a local vector<int> lv2; initialize it to be a copy of the argument
//vector.
//e. Print out the elements of lv2.
//4. In main():
//a. Call f() with gv as its argument.
//b. Define a vector<int> vv, and initialize it with the first ten factorial val-
//ues (1, 2*1, 3*2*1, 4*3*2*1, etc.). c. Call f() with vv as its argument.

#include "std_lib_facilities.hpp"
vector<int> gv{1,2,4,8,16,32,64,128,256,512};
void f(vector<int> vec)
{
    vector<int> lv(vec.size());
    for(int i = 0; i<lv.size();i++)
    {
        lv[i] = vec[i];
    }
    for(int i = 0; i<lv.size();i++)
    {
        cout << lv[i] << endl;
    }
    vector<int> lv2 = vec;
    for(int i = 0; i<lv2.size();i++)
    {
        cout << lv2[i] << endl;
    }
}
int main()
{
    cout << "gv " << endl;
    f(gv);
    vector <int> vv{1, 2*1, 3*2*1, 4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1};
    cout << "\nvv"<<endl;
    f(vv);
    return 0;
}
