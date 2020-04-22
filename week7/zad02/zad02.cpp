//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 13/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "GUI.hpp"
#include "Simple_window.hpp"
using namespace Graph_lib;
struct Check_window : Graph_lib::Window {
    Check_window(Point xy, int w, int h, const string& title) : Window{xy,w,h,title},
        next_button{Point{x_max()-150,0}, 70, 20, "Next",cb_next},
        quit_button{Point{x_max()-70,0}, 70, 20, "Quit",cb_quit},
        b1{Point{x_max()/3,y_max()/2}, 100, 20, "Show coords",cb_b1},
        b2{Point{x_max()/3+100,y_max()/2}, 100, 20, "Hide this button",cb_b2},
        b3{Point{x_max()/3+200,y_max()/2}, 100, 20, "green frame",cb_b5},
        b4{Point{x_max()/3+300,y_max()/2}, 100, 20, "red frame",cb_b4},
        b5{Point{x_max()/3,y_max()/2+20}, 100, 20, "Print my age",cb_b3},
        b6{Point{x_max()/3+100,y_max()/2+20}, 100, 20, "lucky numer",cb_b3},
        b7{Point{x_max()/3+200,y_max()/2+20}, 100, 20, "draw blue frame",cb_b6},
        b8{Point{x_max()/3+300,y_max()/2+20}, 100, 20, "Print my age",cb_b3},
        b9{Point{x_max()/3,y_max()/2+40}, 100, 20, "blue frame",cb_b6},
        b10{Point{x_max()/3+100,y_max()/2+40}, 100, 20, "green frame",cb_b5},
        b11{Point{x_max()/3+200,y_max()/2+40}, 100, 20, "hide this button",cb_b11},
        b12{Point{x_max()/3+300,y_max()/2+40}, 100, 20, "print my age",cb_b3},
        b13{Point{x_max()/3,y_max()/2+60}, 100, 20, "show coords",cb_b13},
        b14{Point{x_max()/3+100,y_max()/2+60}, 100, 20, "print my age",cb_b3},
        b15{Point{x_max()/3+200,y_max()/2+60}, 100, 20, "lucky number",cb_b3},
        b16{Point{x_max()/3+300,y_max()/2+60}, 100, 20, "hide this button",cb_b16},
        b1_out{Point{100,0}, 100, 20, "your output"},
        in_box{Point{x_max()-210,0}, 50, 20, "type age/lucky number"},
        r{Point{x_max()/3-3,y_max()/2-3},406,86}

    {
        r.set_color(Color::invisible);
        attach(r);
        attach(b1_out);
        attach(in_box);
        attach(next_button);
        attach(quit_button);
        attach(b1);
        attach(b2);
        attach(b3);
        attach(b4);
        attach(b5);
        attach(b6);
        attach(b7);
        attach(b8);
        attach(b9);
        attach(b10);
        attach(b11);
        attach(b12);
        attach(b13);
        attach(b14);
        attach(b15);
        attach(b16);

    }
private:
    static void cb_next(Address, Address pw){reference_to<Check_window>(pw).next();}
    static void cb_quit(Address, Address pw){reference_to<Check_window>(pw).quit();}

    static void cb_b1(Address, Address pw){reference_to<Check_window>(pw).print_coords();}
    static void cb_b2(Address, Address pw){reference_to<Check_window>(pw).hide_b2();}
    static void cb_b3(Address, Address pw){reference_to<Check_window>(pw).print_age();}
    static void cb_b4(Address, Address pw){reference_to<Check_window>(pw).draw_red_frame();}
    static void cb_b5(Address, Address pw){reference_to<Check_window>(pw).draw_green_frame();}
    static void cb_b6(Address, Address pw){reference_to<Check_window>(pw).draw_blue_frame();}
    static void cb_b16(Address, Address pw){reference_to<Check_window>(pw).hide_b16();}
    static void cb_b11(Address, Address pw){reference_to<Check_window>(pw).hide_b11();}
    static void cb_b13(Address, Address pw){reference_to<Check_window>(pw).print_coords13();}
    Button b1;
    Button b2;
    Button b3;
    Button b4;
    Button b5;
    Button b6;
    Button b7;
    Button b8;
    Button b9;
    Button b10;
    Button b11;
    Button b12;
    Button b13;
    Button b14;
    Button b15;
    Button b16;
    Rectangle r;
    bool is_b2_hidden = false, is_b16_hidden = false, is_b11_hidden = false;
    Button next_button;
    Button quit_button;
    Out_box b1_out;
    In_box in_box;

    void next(){
        hide();}
    void quit(){hide();}


    void print_coords(){
        if(is_b2_hidden) b2.show();
        if(is_b11_hidden) b11.show();
        if(is_b16_hidden) b16.show();
        ostringstream ss;
            ss << '(' << b1.loc.x << ',' << b1.loc.y << ')';
            b1_out.put(ss.str());
            redraw();}

    void print_coords13(){
           if(is_b2_hidden) b2.show();
           if(is_b11_hidden) b11.show();
           if(is_b16_hidden) b16.show();
           ostringstream ss;
               ss << '(' << b13.loc.x << ',' << b13.loc.y << ')';
               b1_out.put(ss.str());
               redraw();}

    void hide_b2(){b2.hide(); is_b2_hidden = true;}
    void hide_b11(){b11.hide(); is_b11_hidden = true;}
    void hide_b16(){b16.hide(); is_b16_hidden = true;}

    void print_age(){if(is_b2_hidden) b2.show();
        if(is_b11_hidden) b11.show();
        if(is_b16_hidden) b16.show();
        int age = in_box.get_int();
        b1_out.put(to_string(age)); redraw();}
    void draw_red_frame(){
        if(is_b2_hidden) b2.show();
        if(is_b11_hidden) b11.show();
        if(is_b16_hidden) b16.show();
        r.set_color(Color::red);
        redraw();
    }
    void draw_blue_frame(){
        if(is_b2_hidden) b2.show();
        if(is_b11_hidden) b11.show();
        if(is_b16_hidden) b16.show();
        r.set_color(Color::blue);
        redraw();
    }
    void draw_green_frame(){
        if(is_b2_hidden) b2.show();
        if(is_b11_hidden) b11.show();
        if(is_b16_hidden) b16.show();
        r.set_color(Color::green);
        redraw();
    }
};
int main(){
try {
    Check_window win {Point{100,100},800,400,"zad02"};
    return gui_main();
}
catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
}
}
