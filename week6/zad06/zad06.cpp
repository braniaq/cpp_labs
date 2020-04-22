//
//  zad06.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//2. Define a class Fct that is just like Function except that it stores its con- structor arguments. Provide Fct with “reset” operations, so that you can use it repeatedly for different ranges, different functions, etc.
//4. Graph a sine (sin()), a cosine (cos()), the sum of those (sin(x)+cos(x)), and the sum of the squares of those (sin(x)*sin(x)+cos(x)*cos(x)) on a single graph. Do provide axes and labels.

#include "Simple_window.hpp"
#include "Graph.hpp"
class Fct : public Graph_lib::Function{
    Graph_lib::Fct* F;
    double r1,r2, xscale, yscale;
    Point xy;
    int count;
public:
    Fct(Graph_lib::Fct* f, double r1, double r2, Point xy, int count, double xscale, double yscale) : Function(f,r1,r2,xy,count,xscale,yscale){
        this->F = f;
        this -> r1 =r1;
        this -> r2 =r2;
        this -> xy = xy;
        this -> xscale = xscale;
        this -> yscale = yscale;
    }
    void reset(Graph_lib::Fct* f, double r11, double r22, Point pxy,
    int countt, double xsc, double ysc){
        points.clear();
        if (r22-r11<=0) error("bad graphing range");
        if (countt <=0) error("non-positive graphing count");
        double dist = (r22-r11)/countt;
        double r = r11;
        for (int i = 0; i<countt; ++i) {
        add(Point(pxy.x+int(r*xsc),pxy.y-int(f(r)*ysc)));
        r += dist;
        }
    }
    void operator()(Graph_lib::Fct* f, double r11, double r22, Point pxy,
                    int countt, double xsc, double ysc){
        reset(f, r11, r22, pxy, countt, xsc, ysc);
        
    }
};
int main()
{
    Point tl(100,100);
    Simple_window win(tl,600,600,"Function graphs");
    Graph_lib::Axis ax(Graph_lib::Axis::x ,Point{100,300}, 400,20,"1 == 20px");
    Graph_lib::Axis ay(Graph_lib::Axis::y ,Point{300,500}, 400,20,"1 == 20px");
    Fct cose(cos ,-10,11,Point{300,300},400,20,20);
    Fct sine(sin,-10,11,Point(300,300),400,20,20);
    Fct sincos(sin ,-10,1111,Point(400,300),400,20,20);
    Fct combo(cos ,-10,11,Point{300,300},400,20,20);
    sincos([](double x) { return cos(x)+sin(x);} ,-10,11,Point(300,300),400,20,20);
    combo([](double x) { return sin(x)*sin(x)+cos(x)*cos(x);},-10,11,Point(300,300),400,20,20);
    Graph_lib::Text t1(Point{530,310},"sin");
    t1.set_color(FL_RED);
    Graph_lib::Text t2(Point{530,320},"cos");
    t2.set_color(FL_BLUE);
    Graph_lib::Text t3(Point{305,260},"sin+cos");
    t3.set_color(FL_GREEN);
    Graph_lib::Text t4(Point{100,270},"sin^2 + cos^2");
    t4.set_color(FL_BLACK);
    
    cose.set_color(FL_RED);
    sine.set_color(FL_BLUE);
    sincos.set_color(FL_GREEN);
    combo.set_fill_color(FL_BLACK);
    win.attach(t1);
    win.attach(t2);
    win.attach(t3);
    win.attach(t4);
    win.attach(ax);
    win.attach(ay);
    win.attach(cose);
    win.attach(sine);
    win.attach(sincos);
    win.attach(combo);
    win.wait_for_button();
}
