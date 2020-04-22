//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "Simple_window.hpp"
#include "Graph.hpp"
double one(double x){return 1;}
double slope(double x) { return x/2;}
double square(double x) { return x*x; }
double sloping_cos(double x) { return (slope(x)+cos(x));}
int main()
{
    using namespace Graph_lib;
    Point tl(100,100);
    Simple_window win(tl,600,600,"Function graphs");
    Axis ax(Axis::x ,Point{100,300}, 400,20,"1 == 20px");
    Axis ay(Axis::y ,Point{300,500}, 400,20,"1 == 20px");
    ax.set_color(FL_RED);
    ay.set_color(FL_RED);
    Function fc1 (one, -10,11,Point{300,300},400,20,20);
    Function fc2 (slope, -10,11,Point{300,300},400,20,20);
    Function fc3 (square, -10,11,Point{300,300},400,20,20);
    Function fc4 (cos ,-10,11,Point{300,300},400,20,20);
    Function fc5 (sloping_cos ,-10,11,Point{300,300},400,20,20);
    fc4.set_color(FL_BLUE);
    Text ts2(Point{100,y_max()/2-30},"x/2");
    win.attach(fc5);
    win.attach(fc4);
    win.attach(fc3);
    win.attach(ts2);
    win.attach(ax);
    win.attach(ay);
    win.attach(fc1);
    win.attach(fc2);
    win.wait_for_button();
}
