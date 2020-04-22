//
//  zad01.cpp
//  ojp
//
//  Created by Jakub Branicki on 24/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.

//1. Start a program to work with points, discussed in §10.4. Begin by defin- ing the data type Point that has two coordinate members x and y.
//2. Using the code and discussion in §10.4, prompt the user to input seven (x,y) pairs. As the data is entered, store it in a vector of Points called original_points.
//3. Print the data in original_points to see what it looks like.
//4. Open an ofstream and output each point to a file named mydata.txt. On Windows, we suggest the .txt suffix to make it easier to look at the data
//with an ordinary text editor (such as WordPad).
//5. Close the ofstream and then open an ifstream for mydata.txt. Read the
//data from mydata.txt and store it in a new vector called processed_points.
//6. Print the data elements from both vectors.
//7. Compare the two vectors and print Something's wrong! if the number of elements or the values of elements differ.


#include "std_lib_facilities.hpp"

struct Point
{
    int x,y;
    Point(int x, int y)
    {
        this-> x = x;
        this-> y = y;
    }
};

int main()
{
    vector<Point> original_points, processed_points;
    int tmp_x, tmp_y;
    ofstream ost {"mydata.txt"};
    for(int i  = 0 ; i <7 ; i++)
    {
        cout << "pleae enter" << i+1 << "pair of x & y values\n";
        cin >> tmp_x >> tmp_y;
        Point p (tmp_x,tmp_y);
        original_points.push_back(p);
    }
    if (!ost) error("can't open input file ","mydata.txt");
    for (Point r : original_points)
    {
        ost << r.x  <<" "<< r.y << "\n";
    }
    ost.close();
    ifstream ist {"mydata.txt"};
    if(!ist) error("can't open input file ","mydata.txt");
    while(ist>>tmp_x>>tmp_y)
    {
        processed_points.push_back(Point(tmp_x,tmp_y));
    }
    for(int i = 0; i<processed_points.size();i++)
    {
        if(processed_points[i].x != original_points[i].x && processed_points[i].y != original_points[i].y)
            cout << "Something's wrong!\n";
    }
    for (Point r : original_points)
    {
        cout << r.x  <<" "<< r.y << "\n";
    }
    cout << endl;
    for (Point r : processed_points)
    {
        cout << r.x  <<" "<< r.y << "\n";
    }
      ifstream.close();
    return 0;
}
