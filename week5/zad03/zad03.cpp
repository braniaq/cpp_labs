////
////  zad03.cpp
////  ojp
////
////  Created by Jakub Branicki on 30/03/2020.
////  Copyright © 2020 BRNQ. All rights reserved.
//
//
#include "Simple_window.hpp"
#include "Graph.hpp"

int main()
{
    using namespace Graph_lib;

    Point tl(100,100);

    Simple_window win(tl,600,400,"zad03");
    cout << "enter 5 inegers" << endl;
    int a,b,m,n,number_of_points;
    cin >> a >> b >> m >> n >> number_of_points;
    
    win.wait_for_button();
}
