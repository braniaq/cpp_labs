//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 12/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "GUI.hpp"
#include "Simple_window.hpp"
using namespace Graph_lib;
struct Lines_window : Graph_lib::Window {
    Lines_window(Point xy, int w, int h, const string& title) : Window{xy,w,h,title},
        next_button{Point{x_max()-150,0}, 70, 20, "Next point",cb_next},
        quit_button{Point{x_max()-70,0}, 70, 20, "Quit",cb_quit},
        next_x{Point{x_max()-310,0}, 50, 20, "next x:"},
        next_y{Point{x_max()-210,0}, 50, 20, "next y:"},
        xy_out{Point{100,0}, 100, 20, "current (x,y):"},
        color_menu{Point{x_max()- 70,40},70,20,Menu::vertical,"color"},
        menu_button{Point{x_max()-80,30}, 80, 20, "color menu", cb_menu},
        line_menu{Point{x_max()- 70,100},70,20,Menu::vertical,"line style"},
        line_button{Point{x_max()-80,90}, 80, 20, "line menu", cb_line_menu}
    {
    attach(next_button);
    attach(quit_button);
    attach(next_x);
    attach(next_y);
    attach(xy_out);
    attach(lines);
    xy_out.put("no point");
    color_menu.attach(new Button{Point{0,0},0,0,"red",cb_red});
    color_menu.attach(new Button{Point{0,0},0,0,"blue",cb_blue});
    color_menu.attach(new Button{Point{0,0},0,0,"black",cb_black});
    attach(color_menu);
    color_menu.hide();
    line_menu.attach(new Button{Point{0,0},0,0,"dot",cb_dot});
    line_menu.attach(new Button{Point{0,0},0,0,"dash",cb_dash});
    line_menu.attach(new Button{Point{0,0},0,0,"solid",cb_solid});
    attach(line_menu);
    line_menu.hide();
    attach(line_button);
    attach(menu_button);
    attach(lines);
    }
private:
    static void cb_red(Address, Address pw){reference_to<Lines_window>(pw).red_pressed();}
    static void cb_blue(Address, Address pw){reference_to<Lines_window>(pw).blue_pressed();}
    static void cb_black(Address, Address pw){reference_to<Lines_window>(pw).black_pressed();}
    static void cb_dot(Address, Address pw){reference_to<Lines_window>(pw).dot_pressed();}
    static void cb_solid(Address, Address pw){reference_to<Lines_window>(pw).solid_pressed();}
    static void cb_dash(Address, Address pw){reference_to<Lines_window>(pw).dash_pressed();}
    static void cb_menu(Address, Address pw){reference_to<Lines_window>(pw).menu_pressed();}
    static void cb_line_menu(Address, Address pw){reference_to<Lines_window>(pw).line_menu_pressed();}
    static void cb_next(Address, Address pw){reference_to<Lines_window>(pw).next();}
    static void cb_quit(Address, Address pw){reference_to<Lines_window>(pw).quit();}
    void dot_pressed() { change_line(Line_style::dot); hide_line_menu();}
    void solid_pressed() { change_line(Line_style::solid); hide_line_menu();}
    void dash_pressed() { change_line(Line_style::dash); hide_line_menu();}
    void red_pressed() { change(Color::red); hide_menu();}
    void blue_pressed() { change(Color::blue); hide_menu();}
    void black_pressed() { change(Color::black); hide_menu();}
    void menu_pressed() { menu_button.hide(); color_menu.show(); }
    void line_menu_pressed() { line_button.hide(); line_menu.show(); }
    Open_polyline lines;
    Menu color_menu;
    Menu line_menu;
    Button line_button;
    Button menu_button;
    Button next_button;
    Button quit_button;
    In_box next_x;
    In_box next_y;
    Out_box xy_out;
    void next(){
    int x = next_x.get_int(); int y = next_y.get_int();
    lines.add(Point{x,y});
    ostringstream ss;
    ss << '(' << x << ',' << y << ')'; xy_out.put(ss.str());
    redraw();
    }
    void quit(){
    hide();
    }
    void change(Color c) { lines.set_color(c); }
    void change_line(Line_style s) { lines.set_style(s); }
    void hide_menu() { color_menu.hide();
        menu_button.show(); }
    void hide_line_menu() { line_menu.hide();
    line_button.show(); }

};
int main(){
try {
    Lines_window win {Point{100,100},600,400,"lines"};
    return gui_main();
}
catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
}
}
