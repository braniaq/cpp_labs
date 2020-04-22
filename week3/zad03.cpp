//
//  chromo.cpp
//  ojp
//
//  Created by Jakub Branicki on 17/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

////This drill simply involves getting the sequence of versions of Date to work. For each version define a Date called today initialized to June 25, 1978. Then, define a Date called tomorrow and give it a value by copying today into it and increasing its day by one using add_day(). Finally, output today and tomorrow using a << defined as in §9.8.Your check for a valid date may be very simple. Feel free to ignore leap years. However, don’t accept a month that is not in the [1,12] range or day of the month that is not in the [1,31] range. Test each version with at least one invalid date (e.g., 2004, 13, –5).

#include "std_lib_facilities.hpp"

struct Date1
{
int y; int m; int d;
};
void add_day(Date1& dd, int n)
{   if (n>31){ int tmp = n/31;
    if(dd.m==12){ dd.m= tmp-1;}
    dd.d += (n-(tmp*31));
    return;}

    if (n == 31){ dd.m +=1; return;}
    if(n<31 && dd.d == 32-n)
    {
        if(dd.m == 12)
        {
            dd.y +=1;
            dd.m = 1;
            dd.d = 1;
            return;
        }
        dd.m+=1;
        dd.d =1;
        return;
    }
    if(n<31 && (n+dd.d)>31)
    {dd.d = (n+dd.d)-31; dd.m+=1; return;}
        dd.d +=n;
}
void init_day(Date1& dd, int y, int m, int d) {
    if (m <1 || 12<m) error("invalid date");
    else if (d<1 || 31<d) error("invalid date");
    else {dd.y = y; dd.m = m; dd.d = d;}
}
struct Date2
{
int y, m, d;
Date2(int y, int m, int d)
{
   if (m <1 || 12<m) error("invalid date");
   else if (d<1 || 31<d) error("invalid date");
    else {this->d = d;this->m = m; this -> y = y;}
}
void add_day(int n)
{
if (n>31){ int tmp = n/31;
if(m==12){ m= tmp-1;}
d += (n-(tmp*31));
return;}

if (n == 31){ m +=1; return;}
if(n<31 && d == 32-n)
{
    if(m == 12)
    {
        y +=1;
        m = 1;
        d = 1;
        return;
    }
    m+=1;
    d =1;
    return;
}
if(n<31 && (n+d)>31)
{d = (n+d)-31; m+=1;  return;}
d +=n;
}
};
class Date3 {
int y, m, d;
public:
Date3(int y, int m, int d)
{
    if (m <1 || 12<m) error("invalid date");
    else if (d<1 || 31<d) error("invalid date");
    else {this->d = d;this->m = m; this -> y = y;}
}
void add_day(int n)
{
if (n>31){ int tmp = n/31;
if(m==12){ m= tmp-1;}
d += (n-(tmp*31));
return;}

if (n == 31){ m +=1; return;}
if(n<31 && d == 32-n)
{
    if(m == 12)
    {
        y +=1;
        m = 1;
        d = 1;
        return;
    }
    m+=1;
    d =1;
    return;
}
if(n<31 && (n+d)>31)
{d = (n+d)-31; m+=1;  return;}
d +=n;
}
int month() { return m; }
int day() { return d; }
int year() { return y; } };

enum class Month{
jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

class Date4
{
private:
int y; Month m; int d; int mo;
public:
Date4(int y, Month m, int d)
{
    if ((int)m>12 || (int)m<1) error("invalid date");
    else if (d<1 || 31<d) error("invalid date");
    else {this->d = d;this->m = m; this -> y = y; this->mo = (int)m;}
}
Month month() { return m; }
int get_month() { return mo;}
int day() { return d; }
int year() { return y; }
void add_day(int n)
    {
        if (n>31){ int tmp = n/31;
        if((int)m==12){ mo = tmp-1;}
        d += (n-(tmp*31));
        return;}

        if (n == 31){ mo +=1; return;}
        if(n<31 && d == 32-n)
        {
            if(mo == 12)
            {
                y +=1;
                mo = 1;
                d = 1;
                return;
            }
            mo+=1;
            d =1;
            return;
        }
        if(n<31 && (n+d)>31)
        {d = (n+d)-31; mo+=1;  return;}
        d +=n;
    }
};
class Date5 {
private:
int y;
Month m;
int d;
int mo;
public:
Date5(int y, Month m, int d)
{
    if ((int)m>12 || (int)m<1) error("invalid date");
    else if (d<1 || 31<d) error("invalid date");
    else {this->d = d;this->m = m; this -> y = y; this->mo = (int)m;}
}
    int day() const { return d; };
    Month month() const { return m; };
    int year() const { return y; };
void add_day(int n)
{
if (n>31){ int tmp = n/31;
if((int)m==12){ mo = tmp-1;}
d += (n-(tmp*31));
return;}

if (n == 31){ mo +=1; return;}
if(n<31 && d == 32-n)
{
    if(mo == 12)
    {
        y +=1;
        mo = 1;
        d = 1;
        return;
    }
    mo+=1;
    d =1;
    return;
}
    if(n<31 && (n+d)>31)
    {d = (n+d)-31; mo+=1;  return;}
d +=n;
}
void add_month(int n);
void add_year(int n);
};

ostream& operator<<(ostream& os, const Date1& d)
{
return os << '(' << d.y
<< ',' << d.m
<< ',' << d.d << ')';
};
ostream& operator<<(ostream& os, const Date2& d)
{
return os << '(' << d.y
<< ',' << d.m
<< ',' << d.d << ')';
};
ostream& operator<<(ostream& os,  Date3& d)
{
return os << '(' << d.year()
<< ',' << d.month()
<< ',' << d.day() << ')';
};
ostream& operator<<(ostream& os,  Date4& d)
{
return os << '(' << d.year()
<< ',' << (int)d.month()
<< ',' << d.day() << ')';
};
ostream& operator<<(ostream& os, const Date5& d)
{
return os << '(' << d.year()
<< ',' << (int)d.month()
<< ',' << d.day() << ')';
};

int main()
{   Month june = Month::jun;
    Date1 today1;
    init_day(today1, 1976, 6, 25);
    Date2 today2(1976, 6 ,25);
    Date3 today3(1976, 6 ,25);
    Date4 today4(1976, june ,25);
    Date5 today5(1976, june ,25);

    Date1 tomorrow1 = today1;
    Date2 tomorrow2 = today2;
    Date3 tomorrow3 = today3;
    Date4 tomorrow4 = today4;
    Date5 tomorrow5 = today5;
    
    add_day(tomorrow1,1);
    tomorrow2.add_day(1);
    tomorrow3.add_day(1);
    tomorrow4.add_day(1);
    tomorrow5.add_day(1);
    return 0;
}
