//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//3. Initialize a 32-bit signed integer with the bit patterns and print the re- sult: all zeros, all ones, alternating ones and zeros (starting with a left- most one), alternating zeros and ones (starting with a leftmost zero), the 110011001100 . . . pattern, the 001100110011 . . . pattern, the pattern of all-one bytes and all-zero bytes starting with an all-one byte, the pattern of all-one bytes and all-zero bytes starting with an all-zero byte. Repeat that
//exercise with a 32-bit unsigned integer.

#include "std_lib_facilities.hpp"

int main()
{
    signed int a = 0x00000000;
    bitset<32> a1{0x00000000};
    cout << a << "  " << a1 << endl;
    
    signed int b = 0xffffffff;
    bitset<32> b1{0xffffffff};
    cout << b << "  " << b1 << endl;
    
    signed int c = 0xaaaaaaaa;
    bitset<32> c1{0xaaaaaaaa};
    cout << c << "  " << c1 << endl;
    
    signed int d = 0x55555555;
    bitset<32> d1{0x55555555};
    cout << d << "  " << d1 << endl;
    
    signed int e = 0x33333333;
    bitset<32> e1{0x33333333};
    cout << e << "  " << e1 << endl;
    
    signed int f = 0xcccccccc;
    bitset<32> f1{0xcccccccc};
    cout << f << "  " << f1 << endl;
    
    signed int g = 0xf0000000;
    bitset<32> g1{0xf0000000};
    cout << g << "  " << g1 << endl;
    
    signed int h = 0x00000000;
    bitset<32> h1{0x00000000};
    cout << h << "  " << h1 << endl;
    
    signed int i = 0x0fffffff;
    bitset<32> i1{0x0fffffff};
    cout << i << "  " << i1 << endl;
    
    signed int j = 0xffffffff;
    bitset<32> j1{0xffffffff};
    cout << j << "  " << j1 << endl;
    
    cout << "\n\n\n";
    
    unsigned int aa = 0x00000000;
    bitset<32> aa1{0x00000000};
    cout << aa << "  " << aa1 << endl;
    
    unsigned int bb = 0xffffffff;
    bitset<32> bb1{0xffffffff};
    cout << bb<< "  " << bb1 << endl;
    
    unsigned int cc = 0xaaaaaaaa;
    bitset<32> cc1{0xaaaaaaaa};
    cout << cc << "  " << cc1 << endl;
    
    unsigned int dd = 0x55555555;
    bitset<32> dd1{0x55555555};
    cout << dd << "  " << dd1 << endl;
    
    unsigned int ee = 0x33333333;
    bitset<32> ee1{0x33333333};
    cout << ee << "  " << ee1 << endl;
    
    unsigned int ff = 0xcccccccc;
    bitset<32> ff1{0xcccccccc};
    cout << ff << "  " << ff1 << endl;
    
    unsigned int gg = 0xf0000000;
    bitset<32> gg1{0xf0000000};
    cout << gg << "  " << gg1 << endl;
    
    unsigned int hh = 0x00000000;
    bitset<32> hh1{0x00000000};
    cout << hh << "  " << hh1 << endl;
    
    unsigned int ii = 0x0fffffff;
    bitset<32> ii1{0x0fffffff};
    cout << ii << "  " << ii1 << endl;
    
    unsigned int jj= 0xffffffff;
    bitset<32> jj1{0xffffffff};
    cout << jj << "  " << jj1 << endl;
    
}
