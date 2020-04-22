//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 16/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

//Design and implement a rational number class, Rational. A rational number has two parts: a numerator and a denominator, for example, 5/6 (five-sixths, also known as approximately .83333). Look up the definition if you need to. Provide assignment, addition, subtraction, multiplication, division, and equality operators. Also, provide a conversion to double. Why would people want to use a Rational class?

#include "std_lib_facilities.hpp"
using namespace std;
class Rational
{
    int numerator, denominator;
public:
    Rational(int numerator, int denominator) // constructor
    {
        this->numerator = numerator;
        this->denominator = denominator;
    };
    //getters
    int num() { return numerator;}
    int den() { return denominator;}
    
    void add(Rational num)
    {
        if(denominator == num.den()) { numerator += num.num();}
        else
        {
            numerator *=num.den();
            int tmp = denominator;
            denominator *= num.den();
            numerator += (tmp*num.num());
            
        }
    }
    void sub(Rational num)
       {
           if(denominator == num.den()) { numerator -= num.num();}
           else
           {
               numerator *=num.den();
               int tmp = denominator;
               denominator *= num.den();
               numerator -= (tmp*num.num());
               
           }
       }
    void multi(Rational num)
    {
        numerator *= num.num();
        denominator *= num.den();
    }
    void div(Rational num)
    {
        numerator *= num.den();
        denominator *= num.num();
    }
    bool euqality(Rational num)
    {
        if ((numerator/denominator)==(num.num()/num.den())) return true;
            else return false;
    }
    double convert() { return ((double)numerator/(double)denominator);}
    
};
int main()
{   Rational a (1,2);
    Rational b (3,4);
    a.add(b);
    cout <<  a.num()<< endl;
    cout <<  a.den()<< endl;
    return 0;
}

