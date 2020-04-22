//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 10/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
/*
#include "std_lib_facilities.hpp"
using namespace std;

int factorial(int number)
{
    if(number == 1) return 1;
    int fac =1;
    for (int i=number; i>1; i--)
    {
        fac *= i;
    }
    return fac;
}
int main()
{   try{
    int first,second,P,C;
    char choice;
    cout<< "please enter 2 integer numbers"<< endl;
    if(!(cin>>first>> second)) error("not an integer");
    if (first< second) error("first number is smaller than 2nd");
    if( first <= 0 || second <= 0) error("they have to be positive");
    cout << "please enter 'p' to calculate permutation or 'c' to calculate combination"<<endl;
    cin>>choice;
    P = factorial(first)/factorial(first-second);
    if (choice == 'p')
    {
        cout << "number of permutations is:"<< P <<endl;
    }
    else if(choice == 'c')
    {
        C = P/factorial(second);
        cout << "number of combinations is: " << C << endl;
    }
    else error("wrong character");
    return 0;
    
}

    catch(exception& e)
    {
    cerr<<"error "<< e.what()<< endl;
    return 1;
    }
    catch (...)
    {
    cerr << "Oops: unknown exception!\n";
    return 2;
    }
}
*/
