//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//19. Define a class Star. One parameter should be the number of points. Draw
//a few stars with differing numbers of points, differing line colors, and dif- fering fill colors.

#include "Simple_window.hpp"
#include "Graph.hpp"
#define PI 3.14
class Star : public Graph_lib::Closed_polyline{
    int points, radius;
    Point p;
public:
    Star(Point pp, int nump, int rradius) : p{pp},points{nump},radius{rradius}
    {
        double small_radius = radius/2;
        bool switched = true;
        double section  = PI/points;
        for(double angle = 0; angle <=2*PI ;angle += section){

            if(switched){
                Point point = Point{(int)(cos(angle)*radius + p.x), (int)(sin(angle)*radius+p.y)};
                add(point);
                switched = false;
            }
            else{
                Point point = Point{(int)(cos(angle)*small_radius+p.x), (int)(sin(angle)*small_radius+p.y)};
                add(point);
                switched = true;
            }
        }
    }
};
int main()
{
    using namespace Graph_lib;
    Point tl(100,100);
    Simple_window win(tl,800,1000,"zad06");
    Star star1(Point{500,300},6,100);
    star1.set_fill_color(FL_DARK_BLUE);
    star1.set_color(FL_RED);
    win.attach(star1);
    Star star2(Point{200,200},4,100);
    star2.set_color(FL_BLUE);
    star2.set_fill_color(FL_DARK_YELLOW);
    win.attach(star2);
    Star star3(Point{200,500},5,200);
    star3.set_color(FL_YELLOW);
    star3.set_fill_color(FL_DARK_CYAN);
    win.attach(star3);
    Star star4(Point{500,500},8,50);
    star4.set_color(FL_BLUE);
    star4.set_fill_color(FL_CYAN);
    win.attach(star4);
    win.wait_for_button();

}
