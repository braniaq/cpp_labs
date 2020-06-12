//
//  zad02.cpp
//  ojp
//
//  Created by Jakub Branicki on 11/05/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
#include <regex>
#include <map>

typedef vector<string>::const_iterator Line_iter;
class Message {
    Line_iter first;
    Line_iter last;
public:
    Message(Line_iter p1, Line_iter p2) : first{p1}, last{p2} { }
    Line_iter begin() const { return first; }
    Line_iter end() const { return last; }
};
int is_prefix(const string& s, const string& p) // is p the first part of s?
{
int n = p.size();
if (string(s,0,n)==p) return n;
return 0; }
bool find_from_addr(const Message* m, string& s)
{
    for (const auto& x : *m)
        if (int n = is_prefix(x, "From: ")) {
            s = string(x,n);
            return true;

        }
    return false;
}

string find_subject(const Message* m)
{
for (const auto& x : *m)
if (int n = is_prefix(x, "Subject: "))
    return string(x,n);
return ""; }

using Mess_iter = vector<Message>::const_iterator;
struct Mail_file {
    string name;
    vector<string> lines;
    vector<Message> m;
    Mail_file(const string& n)
    {
        ifstream in {n};
        if(!in)
        {
            cerr << " no " << n << '\n'<<endl;
            exit(1);
        }
        for(string s; getline(in,s);)
            lines.push_back(s);
        auto first = lines.begin();
        regex pat {R"(\s*-{4}\s*)"}; //any whitespace before and after ----
        smatch matches;

        for(auto p = lines.begin();p!=lines.end();++p)
        {
            if(regex_match(*p, matches, pat))
            {
                m.push_back(Message(first,p));
                first = p+1;
            }
        }
    }
    Mess_iter begin() const { return m.begin(); }
    Mess_iter end() const { return m.end(); }

};

int main()
{
    Mail_file mfile {"my_mail_file.txt"};
    multimap<string, const Message*> sender;
    for (const auto& m : mfile)
    {
        string s;
        if (find_from_addr(&m,s))
            sender.insert(make_pair(s,&m));
    }
    auto pp = sender.equal_range("John Doe <jdoe@machine.example>");
    for(auto p = pp.first; p!=pp.second; ++p)
        cout << find_subject(p->second) << '\n';
    return 0;
}
