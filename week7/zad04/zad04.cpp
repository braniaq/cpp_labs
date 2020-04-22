//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 19/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
/
//1. Allocate an array of ten ints on the free store using new.
//2. Print the values of the ten ints to cout.
//3. Deallocate the array (using delete[]).
//4. Write a function print_array10(ostream& os, int* a) that prints out the
//values of a (assumed to have ten elements) to os.
//5. Allocate an array of ten ints on the free store; initialize it with the values
//100, 101, 102, etc.; and print out its values.
//6. Allocate an array of 11 ints on the free store; initialize it with the values
//100, 101, 102, etc.; and print out its values.
//7. Write a function print_array(ostream& os, int* a, int n) that prints out the
//values of a (assumed to have n elements) to os.
//8. Allocate an array of 20 ints on the free store; initialize it with the values
//100, 101, 102, etc.; and print out its values.
//9. Did you remember to delete the arrays? (If not, do it.)
//10. Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array().

#include "std_lib_facilities.hpp"
void print_array10(ostream& os, int* a)
{
    for(int i= 0 ; i<10 ; i++){
        os << *(a+i)<<endl;
    }
}
void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i<n; i++)
    {
        os << *(a+i) << endl;
    }
}
void print_vector(ostream& os, vector<int> b)
{
    for (int i = 0; i<b.size(); i++)
    {
        os << b[i] << endl;
    }
}
int main()
{
    int* p = new int[10];
    for(int i = 0 ; i<10;i++){
        cout << *(p + i) <<endl;
    }
    print_array10(cout, p);
    delete [] p;
    int* k = new int[10];
    for(int i = 0 ; i<10; i++)
    {
        *(k+i) = 100 + i;
    }
    for(int i = 0 ; i<10; i++)
    {
        cout<<*(k+i)<<endl;
    }
    delete[] k;

    int* o = new int[11];
    for(int i = 0 ; i<11; i++)
    {
        *(o+i) = 100 + i;
    }
    for(int i = 0 ; i<11; i++)
    {
        cout<<*(o+i)<<endl;
    }
    delete [] o;

    int* l = new int[20];
    for(int i = 0 ; i<20; i++)
    {
        *(l+i) = 100 + i;
    }
    print_array(cout, l, 20);
    delete [] l;
    cout <<"v10"<<endl;
    vector<int> x(10);
    for(int i = 0 ; i<10; i++)
    {
        x[i] = 100 + i;
    }
    print_vector(cout,x);

    cout <<"v11"<<endl;
    vector<int> y(11);
    for(int i = 0 ; i<11; i++)
    {
        y[i] = 100 + i;
    }
    print_vector(cout,y);

    cout <<"v20"<<endl;
    vector<int> z(20);
    for(int i = 0 ; i<20; i++)
    {
        z[i] = 100 + i;
    }
    print_vector(cout,z);
    return 0;
}

