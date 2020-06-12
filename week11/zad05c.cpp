//
//  zad05c.cpp
//  ojp
//
//  Created by BRNQ on 19/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include <limits>
int main() {
    for (unsigned i; cin>>i; )
        cout << dec << i << "=="
            << hex << "0x" << i << "=="
            << bitset<8*sizeof(unsigned)>{i} << '\n';
}
