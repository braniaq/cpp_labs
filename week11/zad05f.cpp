//
//  zad05f.cpp
//  ojp
//
//  Created by BRNQ on 19/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
#include "std_lib_facilities.hpp"
void encipher(
const unsigned long *const v, unsigned long *const w,
const unsigned long * const k)
{
    
    unsigned long y = v[0];
    unsigned long z = v[1];
    unsigned long sum = 0;
    const unsigned long delta = 0x9E3779B9;
    for (unsigned long n = 32; n-->0; ) {
    y += (z<<4 ^ z>>5) + z^sum + k[sum&3];
    sum += delta;
    z += (y<<4 ^ y>>5) + y^sum + k[sum>>11 & 3];
    } w[0]=y; w[1]=z;
    }
void decipher(
const unsigned long *const v, unsigned long *const w,
const unsigned long * const k)
{

unsigned long y = v[0];
unsigned long z = v[1];
unsigned long sum = 0xC6EF3720;
const unsigned long delta = 0x9E3779B9;
    for (unsigned long n = 32; n --> 0; ) {
    z -= (y << 4 ^ y >> 5) + y ^ sum + k[sum>>11 & 3]; sum -= delta;
    y -= (z << 4 ^ z >> 5) + z ^ sum + k[sum&3];
    } w[0]=y; w[1]=z;
    }

int main()
{
    const int nchar = 2*sizeof(long);
    const int kchar = 2*nchar;
    string op;
    string key = "bs";
    string infile = "cipher.txt";
    string outfile = "tekst.txt";
    while (key.size()<kchar) key += '0'; // pad key
    ifstream inf(infile);
    ofstream outf(outfile);
    if (!inf || !outf) error("bad file name");
    const unsigned long* k =
    reinterpret_cast<const unsigned long*>(key.data());
    unsigned long outptr[2];
    char inbuf[nchar];
    unsigned long* inptr = reinterpret_cast<unsigned long*>(inbuf); int count = 0;
    while (inf.get(inbuf[count])) { outf << hex;
    if (++count == nchar) { encipher(inptr,outptr,k); // pad with leading zeros:
    }
        outf << setw(8) << setfill('0') << outptr[0] << ' ' << setw(8) << setfill('0') << outptr[1] << ' ';
        count = 0; }
    return 0;
}
