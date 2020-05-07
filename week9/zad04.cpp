
  zad04.cpp
  ojp

  Created by Jakub Branicki on 30/04/2020.
  Copyright © 2020 BRNQ. All rights reserved.


#include "std_lib_facilities.hpp"
#include <map>
void read_val(map<string,int>& m)
{   string p;
    int q;
    while(true)
    {
        if(!(cin >> p >> q))
            return;
        m[p] = q;
    }

}

struct Item {
    string name;
    int iid;
    double value;
    Item(string n, int id, double val ) : name{n},iid{id},value{val}{}
    Item() {}
    friend ostream& operator<<(ostream& os, Item& i)
    {
        os<<i.name << " " << i.iid << " " << i.value <<endl;
        return os;
    }

};
struct Cmp_by_name{
    bool operator()(const Item& i1, const Item& i2)
    {
        return i1.name<i2.name;
    }
};
struct Cmp_by_id{
    bool operator()(const Item& i1, const Item& i2)
    {
        return i1.iid<i2.iid;
    }
};
struct Cmp_by_val{
    bool operator()(const Item& i1, const Item& i2)
    {
        return i1.value>i2.value;
    }
};
int main()
{
    ifstream ist{"items.txt"};
    vector<Item> items;
    Item tmp;
    list<Item> l;
    map<string,int> msi;
    while(ist >>tmp.name >> tmp.iid >> tmp.value)
    {
        items.push_back(tmp);
        l.push_back(tmp);
        if(ist.fail()) error("error");

    }
    int k = 0;
    cout << k << endl;
    for(Item elem : items)
        cout << elem;
    cout << endl;

    sort(items.begin(), items.end(), Cmp_by_name());
    k++;
    cout << k << endl;
    for(Item elem : items)
        cout << elem;
    cout << endl;

    sort(items.begin(), items.end(), Cmp_by_id());
    k++;
    cout << k << endl;
    for(Item elem : items)
        cout << elem;
    cout << endl;

    sort(items.begin(), items.end(), Cmp_by_val());
    k++;
    cout << k << endl;
    for(Item elem : items)
        cout << elem;
    cout << endl;

    Item z("horse shoe",99,12.34);
    Item x("canon S400",9988,499.95);
    items.insert(items.end(), z);
    items.insert(items.end(), x);
    cout << endl;
    k++;

    cout << k << endl;

    for(Item elem : items)
        cout << elem;
    cout << endl;

    int p = 0;
    cout <<"list "<< p <<endl;
    for(auto i = l.begin();i!=l.end();++i)
        cout << *i;
    p++;
    cout << endl;

    l.sort(Cmp_by_name());
    cout <<"list "<< p <<endl;
    for(auto i = l.begin();i!=l.end();++i)
        cout << *i;
    p++;
    cout << endl;

    cout <<"list "<< p <<endl;
    l.sort(Cmp_by_id());
    for(auto i = l.begin();i!=l.end();++i)
        cout << *i;
    p++;
    cout << endl;

    cout <<"list "<< p <<endl;
    l.sort(Cmp_by_val());
    for(auto i = l.begin();i!=l.end();++i)
        cout << *i;
    p++;
    cout << endl;

    l.insert(l.end(), z);
    l.insert(l.end(), x);
    cout <<"list "<< p <<endl;
    for(auto i = l.begin();i!=l.end();++i)
        cout << *i;
    p++;
    cout << endl;
    msi["lecture"]= 21;
    msi["smartphone"] = 10;
    msi["pen"] = 10;
    msi["juice"] = 15;
    msi["speaker"] = 300;
    msi["book"] = 100;
    msi["microphone"] = 33;
    msi["window"] = 45;
    msi["browser"] = 11;
    msi["page"] = 20;

    for(const auto& p : msi)
        cout<< p.first<< " "  << p.second <<endl;
    cout << endl;
    msi.erase(msi.begin(),msi.end());
    cout << endl;
    read_val(msi);
    cout <<endl;

    for(const auto& p : msi)
        cout<< p.first<< " "  << p.second <<endl;
    cout << endl;

    int sum = 0;
    for(const auto& p : msi)
    {
        sum += p.second;
    }
    cout << endl;
    cout <<"sum="<< sum << endl<<endl;
    map<int,string> mis;
    for(auto& p : msi)
        mis[p.second] = p.first;
    for(auto& p : mis)
        cout << p.first << " " << p.second << endl;
    ist.close();
    ifstream is{"numbers.txt"};
    double dbl;
    vector<double> vd;
    while(is>>dbl){
        vd.push_back(dbl);
    }
    for(double elem : vd)
        cout << elem << endl;
    vector<int> vi(vd.size());
    for(int i = 0; i<vi.size();i++){
        vi[i] = vd[i];
        cout << "Vd " << vd[i] << " vi " << vi[i] <<endl;
    }
    double sum1=0, diff = 0;
    for(int i= 0;i<vd.size();i++)
    {
        sum1 += vd[i];
        diff += (vd[i] - vi[i]);
    }
    cout << "sum double " << sum1 << endl;
    cout <<  "difference " << diff << endl<< endl;
    reverse(vd.begin(), vd.end());
    for(int i= 0;i<vd.size();i++)
    {
        cout << vd[i] << endl;
    }
    cout << endl;
    double mean = sum1/vd.size();
    cout << "mean " << mean << endl;

    vector<double> vd2;
    for(int i = 0; i<vd.size();i++)
    {
        if(vd[i]<mean)
            vd2.push_back(vd[i]);
    }
    for(int i = 0; i<vd2.size();i++)
    {
        cout <<"vd2 "<< vd2[i] << endl;
    }
    cout << endl;
    sort(vd.begin(),vd.end());
    for(int i = 0; i<vd.size();i++)
    {
        cout << vd[i] << endl;
    }
    return 0;
}
