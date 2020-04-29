//
//  zad08.cpp
//  ojp
//
//  Created by Jakub Branicki on 28/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Write a template function that takes a vector<T> vt and a vector<U> vu as arguments and returns the sum of all vt[i]*vu[i]s with Numbers from exercise 7.

#include "std_lib_facilities.hpp"
template<typename T>
class Number
{
public:
    T val;
    Number(){}
    Number(T v) : val{v} {}
    Number(const Number& i) : val{i.val} {}
    Number& operator=(const T& v)
    {
        val = v;
        return *this;
    }
    Number operator+(const T& v)
    {
        return Number(val + v);
    }
    Number operator+(const Number& v)
    {
        return Number(val + v.val);
    }
    Number operator-(const T& v)
    {

        return Int(val - v);
    }
    Number operator-(const Number& v)
    {

        return Int(val - v.val);
    }
    Number operator*(const T& v)
    {

        return Number(val * v);
    }
    Number operator*(const Number& v)
    {

        return Number(val * v.val);
    }
    Number operator/(const T& v)
    {

        return Number(val / v);
    }
    Number operator/(const Number& v)
    {

        return Number(val / v.val);
    }
    Number operator%(const T& v)
    {
        return Number(val%v);
    }
    Number operator%(const Number<T>& v)
    {
        return Number(val%v.val);
    }

    friend ostream& operator<<(ostream& os,const Number& v)
    {
        os<<v.val;
        return os;
    }
    friend istream& operator>>(istream& is,Number& v)
    {
        is >> v.val;
        return is;
    }
};
template<typename T,typename U>
Number<T> sum(vector<T> vt, vector<U> vu)
{
    Number<T> sum(0);
    if(vt.size()>vu.size())
    {
        for(int i = 0; i<vt.size();i++)
        {
            if(i-1>=vu.size())
                sum= sum+ vt[i];
            else
                sum= sum + vt[i]*vu[i];
        }
    }
    if(vt.size()<=vu.size())
    {
        for(int i = 0; i<vu.size();i++)
        {
            if(i-1>=vt.size())
                sum= sum +vu[i];
            else
                sum= sum + vt[i]*vu[i];
        }
    }
    return sum;
}

int main()
{
    vector<Number<int>> p{1,2,3,4,5};
    vector<Number<int>> q{5,4,3,2,1};
    cout << sum(p, q) <<endl;
    return 0;
}
