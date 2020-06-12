
//  zad05a.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

#include "std_lib_facilities.hpp"
struct Node{
    int a,b;
    Node(int aa, int bb) : a{aa}, b{bb}{}
};
struct Mess
{
    Mess(double aa) : a{aa}{}
    string p;
    double a,b,c,d,e,r,t;
};
int main()
{
    int cc, dd,i =0;
    double c;
    while(i < 10)
    {   cin >> cc >> dd;
        cin >> c;
        Mess* p = new Mess(c);
        Node* n1 = new Node(cc,dd);
        cout << p << endl;
        cout << "Size "<< sizeof(Mess) << endl << endl;
        delete p;
        Node* n2 = new Node(dd, cc);
        i++;
        cout << "c1 "<<  n1 << " c2  " << n2<< endl;
        cout << "size of nodes "<<sizeof(int)<< endl;
        cout <<"hole "<< n1 - n2 << endl;
    }
    return 0;
}
