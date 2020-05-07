//
//  zad07.cpp
//  ojp
//
//  Created by Jakub Branicki on 01/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//7. Write a binary search function for a vector<int> (without using the standard one). You can choose any interface you like. Test it. How confident are you that your binary search function is correct? Now write a binary search function for a list<string>. Test it. How much do the two binary search functions resemble each other? How much do you think they
//would have resembled each other if you had not known about the STL?

#include "std_lib_facilities.hpp"

template<typename T, typename U>
bool binary_search_v(T first, T last,  U f)
{
    long i = (last - first)/2;
    U p = *(first +i);
    T t =first +i;
    if(p == f){
        cout  << "got it" << endl;
        return true;}
    else if((first==last))
        return false;
    else if((first > last))
        return false;
    else if(p<f && t !=first)
        binary_search_v(t , last , f);
    else if(p>f &&t != last)
        binary_search_v(first, t, f);
    return false;
}
struct Cmp_by_name{
    bool operator()(const string& i1, const string& i2)
    {
        return i1<i2;
    }
};
template<typename T>
bool bin_s_l(T first, T last, string f, int size)
{
    first = lower_bound(first, last, f, Cmp_by_name());
    return ((first != last) &&(f >= *first));
}
int main()
{
    vector<double> v{2.51, 325.534, 45453.4, 454531.2, 1,24,52.545,30.1};
    double d = 325.534;
    sort(v.begin(), v.end());
    string k = "napis";
    list<string> s = {"napis", "klaiwatura", "babcia", "programowanie", "skup", "dlugow", "za", "gotowke" };
    binary_search_v(v.begin(), v.end(), d);
    s.sort(Cmp_by_name());
//        for(string elem : s)
//            cout <<elem << endl;;
    if(bin_s_l(s.begin(), s.end(), k, s.size()))
        cout << "GOt it" << endl;
    return 0;
}
