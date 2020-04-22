////
////  zad05.cpp
////  ojp
////
////  Created by Jakub Branicki on 24/03/2020.
////  Copyright © 2020 BRNQ. All rights reserved.
///
////4. Write a program called multi_input.cpp that prompts the user to enter several integers in any combination of octal, decimal, or hexadecimal, using the 0 and 0x base suffixes; interprets the numbers correctly; and converts them to decimal form. Then your program should output the values in properly spaced columns like this:
////0x43 hexadecimal converts to67 decimal
////0123 octal converts to 83 decimal
////65 decimal converts to 65 decimal
//
//
#include "std_lib_facilities.hpp"

string define_base(string& tmp)
{   string str = tmp;
    if(str[1] == 'x') return " hexadecimal";
    else if(str[0] == '0' && str[1] != 'x') return " octal";
    else return " decimal";
}
int erase_and_convert(string& tmp){
    int num;
    if(tmp[1] == 'x'){
        tmp = tmp.erase(0,2);
        num = stoi(tmp,nullptr, 16);
        return num;
    }
    else if(tmp[0] == '0' && tmp[1] != 'x'){
        tmp = tmp.erase(0,1);
        num = stoi(tmp,nullptr, 8);
        return num;
    }
    else return stoi(tmp);
}
int main()
{
    cout << "please enter 5 numbers in following bases : decimal - no prefix, hexadecimal prefix(0x), octal - prefix(0)\n";
    string a,b,c,d,e;
    cin.unsetf(ios::dec);
    cout.unsetf(ios::dec);
    cout.setf(std::ios::showbase);
    cin >> a >> b >> c >> d >> e;
    cout <<a<<setw(11)<<define_base(a)<< " converts to " << dec << erase_and_convert(a) << " decimal\n";
    cout <<b<<setw(11)<< define_base(b)<< " converts to " << dec << erase_and_convert(b) << " decimal\n";
    cout <<c<<setw(11)<< define_base(c)<< " converts to " << dec << erase_and_convert(c) << " decimal\n";
    cout <<d<<setw(11)<< define_base(d)<< " converts to " << dec << erase_and_convert(d) << " decimal\n";
    cout <<e<<setw(11)<< define_base(e)<< " converts to " << dec << erase_and_convert(e) << " decimal\n";

    return 0;
}

