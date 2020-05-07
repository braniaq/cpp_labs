//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki  on 01/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

//In the Fruit example in §21.6.5, we copy Fruits into the set. What if we didn’t want to copy the Fruits? We could have a set<Fruit*> instead. However, to do that, we’d have to define a comparison operation for that set. Implement the Fruit example using a set<Fruit*, Fruit_comparison>.
//Discuss the differences between the two implementations.

#include "std_lib_facilities.hpp"
#include <set>
struct  Fruit{
    Fruit(string n, int c, double unit_p) : name{n}, count{c}, unit_price{unit_p}{}
    string name;
    int count;
    double unit_price;
    
};
struct Fruit_comparisson {
    bool operator()(Fruit* a, Fruit* b){
    return ((*a).name < (*b).name);
    }
};
int main()
{   set<Fruit*, Fruit_comparisson> fruits;
    Fruit f1("passion fruit", 10, 5.9);
    Fruit f2("durian", 1, 15.0);
    Fruit f3("apple", 20, 0.9);
    Fruit f4("orange", 15, 2.0 );
    Fruit f5("kiwi", 1, 1.9);
    fruits.insert(&f1);
    fruits.insert(&f2);
    fruits.insert(&f3);
    fruits.insert(&f4);
    fruits.insert(&f5);
    for(Fruit* elem : fruits)
        cout << (*elem).name << endl;
    return 0;
}
