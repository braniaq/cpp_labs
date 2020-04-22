//
//  zad03.cpp
//  ojp
//
//  Created by Jakub Branicki on 15/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "GUI.hpp"
#include "Simple_window.hpp"
double square(double x) { return x*x; }
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
struct Func_window : Graph_lib::Window {
    Func_window(Point xy, int w, int h, const string& title) : Window{xy,w,h,title},
        next_button{Point{x_max()-150,0}, 70, 20, "Next point",cb_next},
        quit_button{Point{x_max()-70,0}, 70, 20, "Quit",cb_quit},
        func_menu{Point{x_max()- 70,40},70,20,Graph_lib::Menu::vertical,"functions"},
        ax(Graph_lib::Axis::x ,Point{100,300}, 400,20,"1 == 20px"),
        ay(Graph_lib::Axis::y ,Point{300,500}, 400,20,"1 == 20px"),
        f(cos,-11,10,Point{300,300},400,20,20)
        
        

    {
        attach(ay);
        attach(ax);
        func_menu.attach(new Graph_lib::Button{Point{0,0},0,0,"sin",cb_b1});
        func_menu.attach(new Graph_lib::Button{Point{0,0},0,0,"cos",cb_b2});
        func_menu.attach(new Graph_lib::Button{Point{0,0},0,0,"log",cb_b3});
        func_menu.attach(new Graph_lib::Button{Point{0,0},0,0,"quadratic",cb_b4});
        f.set_color(Graph_lib::Color::invisible);
        attach(f);
        attach(next_button);
        attach(quit_button);
        attach(func_menu);

    }
private:
    static void cb_next(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).next();}
    static void cb_quit(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).quit();}
    static void cb_b1(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).print_sin();}
    static void cb_b2(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).print_cos();}
    static void cb_b3(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).print_log();}
    static void cb_b4(Graph_lib::Address, Graph_lib::Address pw){Graph_lib::reference_to<Func_window>(pw).print_quadratic();}
    Graph_lib::Axis ay;
    Graph_lib::Axis ax;
    Fct f;
    int xl = -10, xr = 10;
    Graph_lib::Menu func_menu;
    Graph_lib::Button quit_button;
    Graph_lib::Button next_button;
    void next(){hide();}
    void quit(){hide();}
    void print_cos(){
        f.set_color(Graph_lib::Color::black);
        f.reset(cos, -10, 10,Point{300,300},400,20,20);
        redraw();
    }
    void print_sin(){
        
        f.set_color(Graph_lib::Color::black);
        f.reset(sin, -10, 10,Point{300,300},400,20,20);
        redraw();
    }
    void print_log(){
        f.set_color(Graph_lib::Color::black);
        f.reset(log, -10, 10 ,Point{300,300},400,20,20);
        redraw();
    }
    void print_quadratic(){
        f.set_color(Graph_lib::Color::black);
        f.reset(square, -10, 10 ,Point{300,300},400,20,20);
        redraw();
    }

};
int main(){
try {
    Func_window win {Point{100,100},600,600,"zad03"};
    return Graph_lib::gui_main();
}
catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
}
}
