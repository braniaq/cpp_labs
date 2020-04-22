//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 24/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

//Split the binary I/O program from §11.3.2 into two: one program that converts an ordinary text file into binary and one program that reads binary and converts it to text. Test these programs by comparing a text file with what you get by converting it to binary and back.

#include "std_lib_facilities.hpp"
int main()
{
    ifstream ist {"zad09.input.txt"};
    ofstream ost {"zad09.binary"};
    string tmp;
    while(ist >> tmp)
    {
        ost << tmp << " ";
        if(ist.fail()) break;
    }
    ost.close();
    ist.close();

    ifstream ist2 {"zad09.binary"};
    ofstream ost2 {"zad09.output.txt"};
    while(ist2 >> tmp)
    {
        ost2 << tmp << " ";
    }

    return 0;
}
