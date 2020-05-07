//
//  zad05d.cpp
//  ojp
//
//  Created by Jakub Branicki on 03/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include <map>
double weighted_value(
const pair<string,double>& a, const pair<string,double>& b)
{
    return a.second*b.second;
}
template<typename In, typename In2, typename T, typename BinOp, typename BinOp2>
T my_inner_product(In first, In last, In2 first2, T init, BinOp op, BinOp2 op2) {
while(first!=last) {
    init = op(init, op2(*first, *first2));
    ++first;
    ++first2;
}
return init; }

int main()
{
    map<string,double> dow_price ={{"MMM",81.86}, {"AA",34.69}, {"MO",54.45}, {"INTC", 62.5}, {"ROCC", 51.24}};
    map<string,double> dow_weight = {{"MMM", 5.8549}, {"AA",2.4808}, {"MO",3.8940},{"INTC", 2.54334}, {"ROCC", 3.4555}};
    map<string,string> dow_name = {{"MMM","3M Co."}, {"AA", "Alcoa Inc."}, {"MO", "Altria Group Inc."},{"INTC", "INTEL"}, {"ROCC", "ROCCAT"}};
    if (dow_price.find("INTC") != dow_price.end())
        cout << "Intel is in the Dow\n";
    for (const auto& p : dow_price) {
        const string& symbol = p.first; cout << symbol << '\t'
        << p.second << '\t'
        << dow_name[symbol] << '\n';
    }
    double dji_index = my_inner_product(dow_price.begin(), dow_price.end(),dow_weight.begin(),0.0,plus<double>(),weighted_value);
    cout << dji_index << endl;
    return 0;
}
