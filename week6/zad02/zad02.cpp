//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//
//4. DefineaclassImmobile_Circle,whichisjustlikeCirclebutcan’tbemoved.
//5. Define a Striped_rectangle where instead of fill, the rectangle is “filled”
//by drawing one-pixel-wide horizontal lines across the inside of the rectan- gle (say, draw every second line like that). You may have to play with the width of lines and the line spacing to get a pattern you like.

#include "Simple_window.hpp"
#include "Graph.hpp"
class Immobile_Circle : public Graph_lib::Circle{
    int r;
public:
    Immobile_Circle(Point p, int rr) : Circle(p, rr){}
    void move(int x, int y) override {};
};
class Striped_rectangle : public Graph_lib::Rectangle{
    int w,h;
    Point p;
public:
    Striped_rectangle(Point pp, int ww, int hh) :  Rectangle(pp, ww, hh) {p=pp; w=ww; h=hh;}
    void draw_lines() const override {
        fl_rect(p.x, p.y,w, h);
        for(int i  = 0 ; i<h; i+=2){
            fl_line(p.x, p.y+i, p.x+w-1, p.y+i);
        }
    }
};
int main()
{
    using namespace Graph_lib;
    Point tl(100,100);
    Simple_window win(tl,600,600,"zad02");
    Immobile_Circle ic(Point{100,100},50);
    ic.move(200, 200);
    Striped_rectangle sr(Point{300,300},200,200);
    win.attach(sr);
    win.attach(ic);
    win.wait_for_button();
}

