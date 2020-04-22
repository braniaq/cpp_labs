//
//  zad03.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//10. Define a class Pseudo_window that looks as much like a Window as you
//can make it without heroic efforts. It should have rounded corners, a la- bel, and control icons. Maybe you could add some fake “contents,” such as an image. It need not actually do anything. It is acceptable (and indeed recommended) to have it appear within a Simple_window.

#include "Simple_window.hpp"
#include "Graph.hpp"
using namespace Graph_lib;
class Pseudo_window : public Graph_lib::Shape{
    int w,h;
    Point p;
public:
    Pseudo_window(Point pp, int ww, int hh) : w{ww},h{hh},p{pp} { add(pp);}
    void draw_lines() const override
    {
        if(color().visibility())
        {
            Rectangle re(Point{p.x,p.y+8}, w, 13);
            re.set_fill_color(FL_BLACK);
            re.draw_lines();
            Rectangle re2(Point{p.x+10,p.y}, w-20, 10);
            re2.set_fill_color(FL_BLACK);
            re2.draw_lines();
            fl_color(FL_WHITE);
            Text t (Point{p.x+w/2-20,p.y+14}, "zad03");
            t.draw_lines();
            fl_color(FL_BLACK);
            fl_line(point(0).x, point(0).y+10, point(0).x, point(0).y+h-10);
            fl_line(point(0).x+w, point(0).y+10, point(0).x+w, point(0).y+h-10);
            fl_line(point(0).x+10, point(0).y, point(0).x+w-10, point(0).y);
            fl_line(point(0).x+10, point(0).y+h, point(0).x+w-10, point(0).y+h);
            fl_arc(p.x, p.y, 21, 21, 90, 180);
            fl_arc(p.x+w-20, p.y, 21, 21, 0, 90);
            fl_arc(p.x, p.y+h-20, 21, 21, 180, 270);
            fl_arc(p.x+w-20, p.y+h-20, 21, 21, 270, 360);
            fl_pie(p.x, p.y, 20, 20, 90, 180);
            fl_pie(p.x+w-20, p.y, 20, 20, 0, 90);
            fl_color(FL_RED);
            fl_pie(p.x+10, p.y+6, 10, 10, 0, 360);
            fl_color(FL_YELLOW);
            fl_pie(p.x+25, p.y+6, 10, 10, 0, 360);
            fl_color(FL_GREEN);
            fl_pie(p.x+40, p.y+6, 10, 10, 0, 360);
            fl_color(FL_BLACK);
            Text t1(Point{p.x+12,p.y+13},"x");
            t1.set_font_size(10);
            t1.draw_lines();
            Text t2(Point{p.x+27,p.y+14},"-");
            t2.set_font_size(15);
            t2.draw_lines();
            Text t3(Point{p.x+42,p.y+13},">");
            t3.set_font_size(10);
            t3.draw_lines();
            Rectangle r3(Point{p.x+w-60,p.y+21},60,15);
            r3.draw_lines();
            Text t4(Point{p.x+w-45,p.y+33},"Next");
            t4.draw_lines();
            fl_pie(p.x+(w/2)-100, p.y + (h/2)-100, 50, 50, 0, 360);
            fl_pie(p.x+(w/2)+60, p.y + (h/2)-100, 50, 50, 0, 360);
            fl_pie(p.x+(w/2)-90, p.y + (h/2)-100, 200, 200, 180, 360);
            
        }
    }
};
int main()
{
    using namespace Graph_lib;
    Point tl(100,100);
    Simple_window win(tl,600,600,"zad03");
    Pseudo_window ps(Point{100,100}, 400,400);
    win.attach(ps);
    win.wait_for_button();
}
