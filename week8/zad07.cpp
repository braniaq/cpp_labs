//
//  zad07.cpp
//  ojp
//
//  Created by Jakub Branicki on 28/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
// Repeat the previous exercise, but with a class Number<T> where T can be any numeric type. Try adding % to Number and see what happens when you try to use % for Number<double> and Number<int>.

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
int main()
{
    Number<int> p(10);
    Number<int> q(33);
    cout << q%p <<endl;
    return 0;
}
