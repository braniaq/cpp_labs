////
////  zad02.cpp
////  ojp
////
////  Created by Jakub Branicki on 24/03/2020.
////  Copyright © 2020 BRNQ. All rights reserved.
//// Write a program that takes two files containing sorted whitespace-separated words and merges them, preserving order.
//
#include "std_lib_facilities.hpp"

int main()
{
    ifstream ist1 {"file1.txt"}, ist2 {"file2.txt"};
    ofstream ost {"file3.txt"};
    vector<string> v1,v2,v3,v4;
    string tmp_v1, tmp_v2;
    while(ist1 >> tmp_v1)
        v1.push_back(tmp_v1);
    while(ist2 >> tmp_v2)
        v2.push_back(tmp_v2);
    int i = 0;
    int j = 0;
    while(true)
    {   if(i < v1.size() && j <  v2.size()){
        if(v1[i].compare(v2[j])<0){
            v4.push_back(v1[i]);
            i++;
        }
        else if(v1[i].compare(v2[j])>0)
        {
            v4.push_back(v2[j]);
            j++;
        }
        } else if (v1.size() > i)
        {
            v4.push_back(v1[i]);
            i++;
        }
        else if (v2.size() > j)
        {
            v4.push_back(v2[j]);
            j++;
        }
        else break;
    }
    for( int i = 0; i<v4.size(); i++)
    {   ost << v4[i]<<" ";
        cout<< v4[i]<<endl;
    }
    return 0;
}
