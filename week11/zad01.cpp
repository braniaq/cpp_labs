//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Print the size of a char, a short, an int, a long, a float, a double, an int*, and a double* (use sizeof, not <limits>).
//Print out the size as reported by sizeof of Matrix<int> a(10), Matrix<int> b(100), Matrix<double> c(10), Matrix<int,2> d(10,10), Matrix<int,3> e(10,10,10).
//Print out the number of elements of each of the Matrixes from 2.
//Write a program that takes ints from cin and outputs the sqrt() of each int, or “no square root” if sqrt(x) is illegal for some x (i.e., check your sqrt() return values).
//Read ten floating-point values from input and put them into a Matrix- <double>. Matrix has no push_back() so be careful to handle an attempt to enter a wrong number of doubles. Print out the Matrix.
//Compute a multiplication table for [0,n)*[0,m) and represent it as a 2D Matrix. Take n and m from cin and print out the table nicely (assume that m is small enough that the results fit on a line).
//Read ten complex<double>s from cin (yes, cin supports >> for complex) and put them into a Matrix. Calculate and output the sum of the ten com- plex numbers.
//Read six ints into a Matrix<int,2> m(2,3) and print them out.

#include "std_lib_facilities.hpp"
#include "Matrix.h"
#include "MatrixIO.h"
#include <cmath>
#include <complex>
using namespace std;

int main()
{   cout <<"char "<< sizeof(char)<< endl;
    cout <<"short  "<< sizeof(short)<< endl;
    cout <<"int "<< sizeof(int)<< endl;
    cout <<"long "<< sizeof(long)<< endl;
    cout <<"float "<< sizeof(float)<< endl;
    cout <<"double "<< sizeof(double)<< endl;
    cout <<"int* "<< sizeof(int*)<< endl;

    Numeric_lib::Matrix<double> a(10);
    Numeric_lib::Matrix<int> b(100);
    Numeric_lib::Matrix<double> c(10);
    Numeric_lib::Matrix<int, 2> d(10,10);
    Numeric_lib::Matrix<int,3 > e(10,10,10);
    cout <<"a "<< sizeof(a)<< endl;
    cout <<"b "<< sizeof(b)<< endl;
    cout <<"c "<< sizeof(c)<< endl;
    cout <<"d "<< sizeof(d)<< endl;
    cout <<"e "<< sizeof(e)<< endl;

    cout <<"a "<< a.size() << endl;
    cout <<"b "<< b.size() << endl;
    cout <<"c "<< c.size() << endl;
    cout <<"d "<< d.dim2() * d.dim1() << endl;
    cout <<"e "<< e.dim2() * e.dim1() * e.dim3() << endl;

    int tmp;
    while(cin>> tmp)
    {   if(tmp <0)
            cout << "no squere"<< endl;
        else
            cout << sqrt(tmp)<< endl;
    }
    Numeric_lib::Matrix<double> dd(10);
    double d_tmp;
    for(int i  = 0 ; i <10; i++)
    {
        cin >> d_tmp;
        dd[i] = d_tmp;
    }
    cout << dd << endl;


    int n, m;
    cout << "input n" << endl;
    cin >> n;
    cout << "input m" << endl;
    cin >> m;
    vector<int> p(n);
    vector<int> q(m);
    for(int i = 0; i < n; i++)
        p[i] = i;
    for(int i = 0; i < m; i++)
        q[i] = i;
    Numeric_lib::Matrix<int, 2> multi(n,m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            multi[i][j] = i*j;
        }
    }
    cout << multi << endl;

    complex<double> cc;
    complex<double> sum;
    Numeric_lib::Matrix<complex<double>> m_c(10);
    for(int i = 0; i<10; i++)
    {
        cin >> cc;
        m_c[i] = cc;
        sum += cc;
    }
    cout << sum << endl;

    Numeric_lib::Matrix<int,2> mmm(2,3);
    for(int i = 0; i<2 ; i++)
    {
        for (int j = 0; j<3 ; j++)
        {
            cin >> tmp;
            mmm[i][j] = tmp;
        }
    }
    cout << mmm<< endl;
    return 0;
}
