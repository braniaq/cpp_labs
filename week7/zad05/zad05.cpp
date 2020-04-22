//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 19/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

//1. Allocate an int, initialize it to 7, and assign its address to a variable p1.
//2. Print out the value of p1 and of the int it points to.
//3. Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its
//address to a variable p2.
//4. Print out the value of p2 and of the array it points to.
//5. Declare an int* called p3 and initialize it with p2.
//6. Assign p1 to p2.
//7. Assign p3 to p2.
//8. Print out the values of p1 and p2 and of what they point to.
//9. Deallocate all the memory you allocated from the free store.
//10. Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.
//11. Allocate an array of ten ints, and assign its address to a variable p2.
//12. Copy the values from the array pointed to by p1 into the array pointed to
//by p2.
//13. Repeat 10–12 using a vector rather than an array.

#include "std_lib_facilities.hpp"
int main()
{
    int* p1 = new int(7);
    cout << p1 << endl;
    cout << *p1 << endl;
    int* p2 = new int[7];
    
    for(int i = 0; i<7; i++)
    {
        if(i==0)
            *(p2+i) = 1;
        else
            *(p2+i) = i*2;
    }
    cout << p2 << endl;
    for(int i = 0; i<7; i++)
    {
        cout << *(p2 + i)<<endl;
    }
    int* p3 = p2;
    p2 = p1;
    p3 = p2;
    cout << "p1 " << p1 << endl;
    cout << *p1 << endl;
    cout << "p2 " << p2 << endl;
    cout << *p2 << endl;
    cout << p3 << endl;
    delete [] p3;
    p1 = new int[10];
    for(int i = 0; i<7; i++)
    {
        if(i==0)
            *(p1+i) = 1;
        else
            *(p1+i) = i*2;
    }
    p2 = new int[10];
    for(int i = 0; i < 10 ; i++)
    {
        *(p2+i) = *(p1+i);
    }
    delete [] p1;
    delete[] p2;
    vector<int> v1(10);
    vector<int> v2(10);
    for(int i = 0; i<7; i++)
    {
        if(i==0)
            v1[i] = 1;
        else
            v1[i] = i*2;
    }
    for(int i = 0; i < 10 ; i++)
    {
        v2[i] = v1[i];
    }
    return 0;
}
