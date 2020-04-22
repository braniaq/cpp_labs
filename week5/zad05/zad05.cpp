//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
//1. Define a class Arc, which draws a part of an ellipse. Hint: fl_arc().
//2. Draw a box with rounded corners. Define a class Box, consisting of four
//lines and four arcs.
//3. Define a class Arrow, which draws a line with an arrowhead.
//14. Define a right triangle class. Make an octagonal shape out of eight right
//triangles of different colors.
#include "Simple_window.hpp"
#include "Graph.hpp"
class Arc: public Graph_lib::Shape{
    int w,h;
    Point p;
public:
    Arc(Point pp, int ww, int hh) : w{ww},h{hh},p{pp} {}
    Point center() const{
        return{p.x+w,p.y+h};
    }
    void draw_lines() const{
        if(color().visibility())
            fl_arc(p.x,p.y,w+w,h+h,180,0);
    }

};
class Box : public Graph_lib::Shape{
    int w,h;
    Point p;
public:
    Box(Point pp, int ww, int hh) : w{ww},h{hh},p{pp}
    {
        add(Point(pp.x,pp.y));
    }
    void draw_lines() const
    {
        if(color().visibility())
        {
            fl_line(point(0).x, point(0).y+20, point(0).x, point(0).y+h-20);
            fl_line(point(0).x+w, point(0).y+20, point(0).x+w, point(0).y+h-20);
            fl_line(point(0).x+20, point(0).y, point(0).x+w-20, point(0).y);
            fl_line(point(0).x+20, point(0).y+h, point(0).x+w-20, point(0).y+h);
            fl_arc(p.x, p.y, 41, 41, 90, 180);
            fl_arc(p.x+w-40, p.y, 41, 41, 0, 90);
            fl_arc(p.x, p.y+h-40, 41, 41, 180, 270);
            fl_arc(p.x+w-40, p.y+h-40, 41, 41, 270, 360);
        }
    }

};
class Arrow:public Graph_lib::Shape{
    Point p;
    int h;
public:
    Arrow(Point pp, int hh):p{pp},h{hh}{}
    void draw_lines() const
    {
        fl_line(p.x, p.y, p.x, p.y+h);
        fl_line(p.x, p.y, p.x-10, p.y+10);
        fl_line(p.x, p.y, p.x+10, p.y+10);
    }
};
class RightTriangle : public Graph_lib::Shape {
    Point p;
    int w,h,pos;
public:
    RightTriangle(Point pp, int ww, int hh, int ppos): p{pp},w{ww},h{hh},pos{ppos} {}
    void draw_lines() const
    {
        if(color().visibility()){
            switch(pos){
            case 0:
                fl_line(p.x,p.y,p.x,p.y+h);
                fl_line(p.x, p.y+h, p.x+w, p.y+h);
                fl_line(p.x+w,p.y+h ,p.x, p.y);
                break;
            case 1:
                fl_line(p.x,p.y,p.x+w,p.y);
                fl_line(p.x+w, p.y, p.x+w, p.y+h);
                fl_line(p.x+w,p.y+h ,p.x, p.y);
                    break;
            case 2:
                fl_line(p.x,p.y,p.x+h,p.y);
                fl_line(p.x+h, p.y, p.x, p.y-w);
                fl_line(p.x,p.y ,p.x, p.y-w);
                    break;
            case 3:
                fl_line(p.x+h,p.y,p.x+h,p.y-w);
                fl_line(p.x+h, p.y-w, p.x, p.y-w);
                fl_line(p.x,p.y-w ,p.x+h, p.y);
                    break;
            case 4:
                fl_line(p.x,p.y,p.x,p.y+h);
                fl_line(p.x, p.y+h, p.x-w, p.y+h);
                fl_line(p.x-w,p.y+h ,p.x, p.y);
                    break;
            case 5:
                fl_line(p.x,p.y,p.x,p.y+h);
                fl_line(p.x, p.y+h, p.x+w, p.y);
                fl_line(p.x+w,p.y ,p.x, p.y);
                    break;

            }
        }
    }
};
int main()
{
    using namespace Graph_lib;
    Point tl(100,100);
    Simple_window win(tl,800,1000,"zad05");

    Arc a(Point{100,200}, 80,180);
    Box b(Point{100,100},200,200);
    Arrow arr(Point{600,200},100);
    RightTriangle rt1(Point{400,400},100,200,0);
    RightTriangle rt2(Point{400,400},100,200,1);
    RightTriangle rt3(Point{350,550},100,200,2);
    RightTriangle rt4(Point{350,550},100,200,3);
    RightTriangle rt5(Point{500,400},50,50,0);
    RightTriangle rt6(Point{350,550},50,50,1);
    RightTriangle rt7(Point{400,400},50,50,4);
    RightTriangle rt8(Point{500,550},50,50,5);
    rt1.set_color(FL_RED);
    rt2.set_color(FL_BLUE);
    rt3.set_color(FL_GREEN);
    rt4.set_color(FL_CYAN);
    rt5.set_color(FL_YELLOW);
    rt6.set_color(FL_MAGENTA);
    rt7.set_color(FL_WHITE);
    rt8.set_color(FL_DARK_BLUE);
    win.attach(rt1);
    win.attach(rt2);
    win.attach(rt3);
    win.attach(rt4);
    win.attach(rt5);
    win.attach(rt6);
    win.attach(rt7);
    win.attach(rt8);
    win.attach(arr);
    win.attach(b);
    win.attach(a);
    win.wait_for_button();
}

