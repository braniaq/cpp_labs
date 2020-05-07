//
//  zad05e.cpp
//  ojp
//
//  Created by Jakub Branicki on 04/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include <unordered_map>

int main()
{
    unordered_map<string,double> dow_price{{"MMM",81.86}, {"AA",34.69}, {"MO",54.45}, {"INTC", 62.5}, {"ROCC", 51.24},
        {"MOM", 5.8549}, {"AAPP",2.4808}, {"MAL",3.8940},{"INT", 2.54334}, {"RODO", 3.4555}};
    for( const auto& p : dow_price)
    {
        cout << p.first << "\t" << p.second << endl;
    }
    return 0;
}
