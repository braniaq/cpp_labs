//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//Run this:
//int v = 1; for (int i = 0; i<sizeof(v)*8; ++i) { cout << v << ' '; v <<=1; } Run that again with v declared to be an unsigned int.
//Using hexadecimal literals, define short unsigned ints with:
//a. Every bit set
//b. The lowest (least significant bit) set
//c. The highest (most significant bit) set
//d. The lowest byte set
//e. The highest byte set
//f. Every second bit set (and the lowest bit 1)
//g. Every second bit set (and the lowest bit 0)
//Print each as a decimal and as a hexidecimal.
//Do 3 and 4 using bit manipulation operations (|, &, <<) and (only) the literals 1 and 0

#include "std_lib_facilities.hpp"


int main()
{

    unsigned int v = 1;
    for (int i = 0; i<sizeof(v)*8; ++i)
        { cout << v << ' '; v <<=1; }
    short unsigned int a = 0xffff;
    short unsigned int b = 0x0001;
    short unsigned int c = 0x8000;
    short unsigned int d = 0x000f;
    short unsigned int e = 0xf000;
    short unsigned int f = 0x5555;
    short unsigned int g = 0xaaaa;
    bitset<4*sizeof(unsigned)> a1{0xffff};
    bitset<4*sizeof(unsigned)> a2{0x0001};
    bitset<4*sizeof(unsigned)> a3{0x8000};
    bitset<4*sizeof(unsigned)> a4{0x000f};
    bitset<4*sizeof(unsigned)> a5{0xf000};
    bitset<4*sizeof(unsigned)> a6{0x5555};
    bitset<4*sizeof(unsigned)> a7{0xaaaa};


    cout << "every bit set" << endl;
    cout << a1 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex" << endl;
    cout << dec << setw(5) << a << " " << hex << a << endl;

    cout << "last set" << endl;
    cout << a2 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << b << " " << hex << b << endl;

    cout << "first set" << endl;
    cout << a3 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << c << " " << hex << c << endl;

    cout << "last byte" << endl;
    cout << a4 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << d << " " << hex << d << endl;

    cout << "first byte" << endl;
    cout << a5 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << e << " " << hex << e << endl;

    cout << "second bit set" << endl;
    cout << a6 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << f << " " << hex << f << endl;

    cout << "second bit 0 set" << endl;
    cout << a7 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << g << " " << hex << g << endl;

    cout << "\n \n \n ";
    short unsigned int aa = 0x1111 | 0x1111<<1 | 0x1111<<2 | 0x1111<<3;
    short unsigned int bb = 0x0001;
    short unsigned int cc = 0x1000<<3;
    short unsigned int dd = 0x0001 | 0x0001<<1 | 0x0001<<2 | 0x0001<<3;
    short unsigned int ee = 0x1000 | 0x1000<<1 | 0x1000<<2 | 0x1000<<3;
    short unsigned int ff = 0x1111 | 0x1111<<2;
    short unsigned int gg = ~ff;
    bitset<4*sizeof(unsigned)> a11{0x1111 | 0x1111<<1 | 0x1111<<2 | 0x1111<<3};
    bitset<4*sizeof(unsigned)> a22{0x0001};
    bitset<4*sizeof(unsigned)> a33{0x1000<<3};
    bitset<4*sizeof(unsigned)> a44{0x0001 | 0x0001<<1 | 0x0001<<2 | 0x0001<<3};
    bitset<4*sizeof(unsigned)> a55{0x1000 | 0x1000<<1 | 0x1000<<2 | 0x1000<<3};
    bitset<4*sizeof(unsigned)> a66{0x1111 | 0x1111<<2};
    bitset<4*sizeof(unsigned)> a77{gg};


    cout << "every bit set" << endl;
    cout << a11 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex" << endl;
    cout << dec << setw(5) << aa << " " << hex << aa << endl;

    cout << "last set" << endl;
    cout << a22 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << bb << " " << hex << bb << endl;

    cout << "first set" << endl;
    cout << a33 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << cc << " " << hex << cc << endl;

    cout << "last byte" << endl;
    cout << a44 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << dd << " " << hex << dd << endl;

    cout << "first byte" << endl;
    cout << a55 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << ee << " " << hex << ee << endl;

    cout << "second bit set" << endl;
    cout << a66 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << ff << " " << hex << ff << endl;

    cout << "second bit 0 set" << endl;
    cout << a77 << endl;
    cout << "dec" << setw(5) << " " << setw(3) << "hex"<< endl;
    cout << dec << setw(5) << gg << " " << hex << gg << endl;
    return 0;
}
