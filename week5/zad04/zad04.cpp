//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//1. Make an 800-by-1000 Simple_window.
//2. Put an 8-by-8 grid on the leftmost 800-by-800 part of that window (so that
//each square is 100 by 100).
//3. Make the eight squares on the diagonal starting from the top left corner
//red (use Rectangle).
//4. Find a 200-by-200-pixel image (JPEG or GIF) and place three copies of it
//on the grid (each image covering four squares). If you can’t find an image that is exactly 200 by 200, use set_mask() to pick a 200-by-200 section of a larger image. Don’t obscure the red squares.
//5. Add a 100-by-100 image. Have it move around from square to square when you click the “Next” button. Just put wait_for_button() in a loop with some code that picks a new square for your image.


#include "Simple_window.hpp"
#include "Graph.hpp"
int main()
{
    using namespace Graph_lib;

    Point tl(100,100);

    Simple_window win(tl,800,1000,"zad04");
    int x_size= 800, y_size = 800;
    int x_grid =100, y_grid = 100;
    Lines grid;
    for(int x=x_grid; x<x_size; x+= x_grid)
        grid.add(Point(x,0), Point(x,y_size));
    for(int y = y_grid; y<y_size;y+=y_grid)
        grid.add(Point(0,y), Point(x_size,y));
    win.attach(grid);
    Rectangle r1(Point(0,0),100,100);
    Rectangle r2(Point(100,100),100,100);
    Rectangle r3(Point(200,200),100,100);
    Rectangle r4(Point(300,300),100,100);
    Rectangle r5(Point(400,400),100,100);
    Rectangle r6(Point(500,500),100,100);
    Rectangle r7(Point(600,600),100,100);
    Rectangle r8(Point(700,700),100,100);
    r1.set_color(FL_RED);
    r2.set_color(FL_RED);
    r3.set_color(FL_RED);
    r4.set_color(FL_RED);
    r5.set_color(FL_RED);
    r6.set_color(FL_RED);
    r7.set_color(FL_RED);
    r8.set_color(FL_RED);
    r1.set_style(Line_style(Line_style::solid,4));
    r2.set_style(Line_style(Line_style::solid,4));
    r3.set_style(Line_style(Line_style::solid,4));
    r4.set_style(Line_style(Line_style::solid,4));
    r5.set_style(Line_style(Line_style::solid,4));
    r6.set_style(Line_style(Line_style::solid,4));
    r7.set_style(Line_style(Line_style::solid,4));
    r8.set_style(Line_style(Line_style::solid,4));
    win.attach(r1);
    win.attach(r2);
    win.attach(r3);
    win.attach(r4);
    win.attach(r5);
    win.attach(r6);
    win.attach(r7);
    win.attach(r8);
    Image i1{Point{300,0},"Square_200x200.jpg"};
    Image i2{Point{300,500},"Square_200x200.jpg"};
    Image i3{Point{600,100},"Square_200x200.jpg"};
    Image i4{Point{0,0},"100x100.jpg"};
    win.attach(i1);
    win.attach(i2);
    win.attach(i3);
    win.attach(i4);
    int i = 0;
    while(i<64)
    {
        if(i%3 == 0) { i4.move(100, 0);i++;}
        if(i%4 == 0) { i4.move(-100,0);i++;}
        if(i%6 == 0) { i4.move(0,-100);i++;}
        if(i%7 == 0) { i4.move(0,100);i++;}
        i++;
        win.wait_for_button();
    }
}

