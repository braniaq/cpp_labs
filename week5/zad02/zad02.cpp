//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 30/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//1. Draw a rectangle as a Rectangle and as a Polygon. Make the lines of the Polygon red and the lines of the Rectangle blue.
//2. Draw a 100-by-30 Rectangle and place the text “Howdy!” inside it.
//3. Draw your initials 150 pixels high. Use a thick line. Draw each initial in
//a different color.
//4. Draw a 3-by-3 tic-tac-toe board of alternating white and red squares.


#include "Simple_window.hpp"
#include "Graph.hpp"

int main()
{
    using namespace Graph_lib;

    Point tl(100,100);

    Simple_window win(tl,600,400,"zad02");

//rectangle
    Rectangle rect {Point{300,200}, 100,150};
    rect.set_color(FL_BLUE);
    rect.move(150,0);
    win.attach(rect);
    
//closed polyline
    Closed_polyline poly_rect;
    poly_rect.add(Point{100,50});
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{100,100});
    poly_rect.set_color(FL_RED);
    win.attach(poly_rect);
//2
    Rectangle r2 {Point{20,20},100,30};
    Text t{Point{40,40}, "Howdy!"};
    t.set_font_size(20);
    win.attach(t);
    win.attach(r2);
//3
    Open_polyline first_name;
    first_name.add(Point{200,200});
    first_name.add(Point{250,200});
    first_name.add(Point{250,350});
    first_name.add(Point{200,350});
    first_name.add(Point{200,330});
    first_name.set_style(Line_style(Line_style::solid,6));
    win.attach(first_name);
    
    Rectangle b1{Point{260,200}, 75,75};
    b1.set_style(Line_style(Line_style::solid,6));
    Rectangle b2{Point{260,275}, 90,75};
    b2.set_style(Line_style(Line_style::solid,6));
    win.attach(b1);
    win.attach(b2);
    
//4
    Rectangle ttt1{Point{350,100}, 25,25};
    Rectangle ttt2{Point{375,100}, 25,25};
    Rectangle ttt3{Point{400,100}, 25,25};
    Rectangle ttt4{Point{350,125}, 25,25};
    Rectangle ttt5{Point{375,125}, 25,25};
    Rectangle ttt6{Point{400,125}, 25,25};
    Rectangle ttt7{Point{350,150}, 25,25};
    Rectangle ttt8{Point{375,150}, 25,25};
    Rectangle ttt9{Point{400,150}, 25,25};
    ttt1.set_fill_color(FL_WHITE);
    ttt2.set_fill_color(FL_RED);
    ttt3.set_fill_color(FL_WHITE);
    ttt4.set_fill_color(FL_RED);
    ttt5.set_fill_color(FL_WHITE);
    ttt6.set_fill_color(FL_RED);
    ttt7.set_fill_color(FL_WHITE);
    ttt8.set_fill_color(FL_RED);
    ttt9.set_fill_color(FL_WHITE);
    win.attach(ttt1);
    win.attach(ttt2);
    win.attach(ttt3);
    win.attach(ttt4);
    win.attach(ttt5);
    win.attach(ttt6);
    win.attach(ttt7);
    win.attach(ttt8);
    win.attach(ttt9);
//extra
    Rectangle extra{Point{500,100}, 50,50};
    extra.set_fill_color(FL_WHITE);
    Text ex{Point{508,140}, "N"}; //netflix icon
    ex.set_font_size(50);
    ex.set_color(FL_RED);
    win.attach(extra);
    win.attach(ex);
    win.wait_for_button();
}

