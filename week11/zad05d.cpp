//
//  zad05d.cpp
//  ojp
//
//  Created by Jakub Branicki on 19/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
void infinite() {
    unsigned char max = 160; // very large
    for (signed char i=0; i<max; ++i)
        cout << int(i) << '\n';
}
//it is infninite because char has only 8 bits so it can have max 2^7 value and because it is a signed char last bit coresponds to the sign(2^6 only)
