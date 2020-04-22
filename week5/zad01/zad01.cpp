//zad01
//Created by Jakub Branicki on 30/03/2020.


#include "Simple_window.hpp"
#include "Graph.hpp"

int main()
{
    using namespace Graph_lib;

    Point tl(100,100);

    Simple_window win(tl,600,400,"My window");
// triangle
    Polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(350,100));
    poly.add(Point(400,200));
    poly.set_color(Color::blue); // new color
    win.attach (poly);
// axis
    Axis xa{Axis::x, Point{20,200}, 280,10,"x axis"}; // new starting point
    win.attach(xa);
    Axis ya{Axis::y, Point{20,200}, 150,5, "y axis"}; // lengh&notches
    ya.label.set_color(FL_RED);
    win.attach(ya);
//function
    Function cose {cos, 0 ,100,Point{20,188},800,20,20}; //color, point
    cose.set_color(FL_GREEN);
    win.attach(cose);
//rectangle
    Rectangle rect {Point{100,300}, 50,150};
    rect.set_color(FL_DARK_YELLOW);
    win.attach(rect);
//closed polyline
    Closed_polyline poly_rect;
    poly_rect.add(Point{100,50});
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{100,100});
    poly_rect.add(Point{150,75});
    win.attach(poly_rect);
// fill&style
    poly_rect.set_fill_color(FL_BLUE);
    rect.set_style(Line_style(Line_style::dash,4));

//text
    Text t{Point{10,300}, "ZAD01"};
    t.set_font(FL_TIMES);
    t.set_font_size(100);
    t.set_color(FL_CYAN);
    win.attach(t);
//image
    Image ii{Point{350,180},"image.jpg"};
    win.attach(ii);
// more
    Circle c {Point{500,100},50};
    Ellipse e {Point{500,100}, 75,25};
    e.set_color(Color::dark_red);
    Mark m {Point{100,200},'x'};
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
    << "; window size: " << win.x_max() << "*" << win.y_max();
    Text sizes {Point{100,20}, oss.str()};
    m.move(400, 80);
    win.attach(c);
    win.attach(e);
    win.attach(m);
    win.attach(sizes);
    
    win.wait_for_button();
}

