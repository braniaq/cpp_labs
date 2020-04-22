//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 19/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"

int main()
{
    //stack
    int a,b;
    int* p1;
    int* p2;
    p1 = &a;
    p2 = &b;
    cout << "stack"<< endl;
    if(p1<p2)
        cout << p1 <<"to higher "<< p2 <<endl;
    else
        cout << "to lower"<<endl;
    
    //free store
    cout << "free store"<<endl;
    int* p4 = new int[3];
    for(int i = 0; i<3; i++)
    {
        if(p4 + 1 > p4 )
            cout << "to higher" << endl;
        else
            cout << "to lower" << endl;
    }
    
    
    return 0;
}
