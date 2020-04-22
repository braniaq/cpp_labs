//
//  zad05.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

//Class definition drill:
//1. Define a struct Person containing a string name and an int age.
//2. Define a variable of type Person, initialize it with “Goofy” and 63, and
//write it to the screen (cout).
//3. Define an input (>>) and an output (<<) operator for Person; read in a
//Person from the keyboard (cin) and write it out to the screen (cout).
//4. Give Person a constructor initializing name and age.
//5. Make the representation of Person private, and provide const member
//functions name() and age() to read the name and age.
//6. Modify >> and << to work with the redefined Person.
//7. Modify the constructor to check that age is [0:150) and that name doesn’t contain any of the characters ; : " ' [ ] * & ^ % $ # @ !. Use error() in case of error. Test.
//8. Read a sequence of Persons from input (cin) into a vector<Person>; write them out again to the screen (cout). Test with correct and errone- ous input.
//9. ChangetherepresentationofPersontohavefirst_nameandsecond_name instead of name. Make it an error not to supply both a first and a second name. Be sure to fix >> and << also. Test.

#include "Simple_window.hpp"
#include "Graph.hpp"
struct Person{
private:
    string first_name, last_name;
    int age;
public:
    Person(){}
    Person(string fn, string ln, int a)
    {
        if(a<0 || a>149) error("i don't think so");
        else age = a;
        for(char c : first_name){
            if((c >32 && c <48)||c==91 || c==93 || c==64 || c == 59 || c== 58 ) error("bad character");
        }
        for(char c : last_name){
            if((c >32 && c <48)||c==91 || c==93 || c==64 || c == 59 || c== 58 ) error("bad character");
        }
        first_name =fn;
        last_name = ln;

    }
    friend istream& operator>> (istream& is,Person& p){
        string fn, ln;
        int a;
        is >> fn >> ln >> a;
        if(a<0 || a>150) error("i don't think so");
        else p.age = a;
        for(char c : fn){
            if((c >32 && c <48)||c==91 || c==93 || c==64 || c == 59 || c== 58 ) error("bad character");
        }
        for(char c : ln){
            if((c >32 && c <48)||c==91 || c==93 || c==64 || c == 59 || c== 58 ) error("bad character");
        }
        p.first_name = fn;
        p.last_name = ln;
        return is;
        };
    int get_age() const{ return age;};
    string name() const{return (first_name+" " + last_name);};
};
ostream& operator<< (ostream& os, const Person& p){
    os << p.name()<< " " << p.get_age()<<endl;
    return os;
}
int main()
{
    vector<Person> people;
    Person p1("Goofy", "borwn" ,63);
    Person p2;
    cout << p1;
    cout << " enter few people data in following format : first_name last_name age"<<endl;
    while(cin>> p2){
    people.push_back(p2);
    }
    for (Person p : people){
    cout << p;
    }
}
