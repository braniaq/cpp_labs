//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 25/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Define a class Int having a single member of class int. Define construc- tors, assignment, and operators +, –, *, / for it. Test it, and improve its design as needed (e.g., define operators << and >> for convenient I/O).

#include "std_lib_facilities.hpp"
class Int
{
public:
    Int(){}
    Int(int v) : val{v} {}
    Int(const Int& i) : val{i.val} {}
    int val;
    Int& operator=(const int& v)
    {
        val = v;
        return *this;
    }
    Int operator+(const int& v)
    {

        return Int(val + v);
    }
    Int operator+(const Int& v)
    {

        return Int(val + v.val);
    }
    Int operator-(const Int& v)
    {

        return Int(val - v.val);
    }
    Int operator-(const int& v)
    {

        return Int(val - v);
    }
    Int operator*(const int& v)
    {

        return Int(val * v);
    }
    Int operator*(const Int& v)
    {

        return Int(val * v.val);
    }
    Int operator/(const int& v)
    {

        return Int(val / v);
    }
    Int operator/(const Int& v)
    {

        return Int(val / v.val);
    }
    friend ostream& operator<<(ostream& os,const Int& v)
    {
        os<<v.val;
        return os;
    }
    friend istream& operator>>(istream& is,Int& v)
    {
        is >> v.val;
        return is;
    }

};

int main()
{
    Int p = 15;
    Int q;
    cout <<54 *3 <<endl;
    cin >> q;
    cout << q << endl;
    return 0;
}
