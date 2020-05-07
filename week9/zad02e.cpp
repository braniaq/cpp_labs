//
//  zad02e.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
template<typename T>
class my_vector : public vector<T>{
public:
    my_vector(vector<T> v) : vector<T>{v} {}
    void push_front(const T& d)
    {
        this -> resize((this->end() - this->begin())+1);

        for(auto i = this->end()-1;i!=this->begin()-1; --i)
        {
            *(i+1) = *i;

        }
        *this->begin() =  d;
    }

};
int main()
{   vector<double> p1{1,2,5,2,34};
    my_vector<double> p = (my_vector<double>)p1;
    for (double elem : p)
        cout << elem <<endl;
    p.push_front(25.5);
    for (double elem : p)
        cout << elem <<endl;
    return 0;
}
