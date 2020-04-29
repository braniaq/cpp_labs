//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 25/04/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//1. Define template<typename T> struct S { T val; };.
//2. Add a constructor, so that you can initialize with a T.
//3. Define variables of types S<int>, S<char>, S<double>, S<string>, and
//S<vector<int>>; initialize them with values of your choice.
//4. Read those values and print them.
//5. Add a function template get() that returns a reference to val.
//6. Put the definition of get() outside the class.
//7. Make val private.
//8. Do 4 again using get().
//9. Add a set() function template so that you can change val.
//10. Replace set() with an S<T>::operator=(const T&). Hint: Much simpler than §19.2.5.
//11. Provide const and non-const versions of get().
//12. Define a function template<typename T> read_val(T& v) that reads from
//cin into v.
//13. Use read_val() to read into each of the variables from 3 except the
//S<vector<int>> variable.
//14. Bonus: Define input and output operators (>> and <<) for vector<T>s.
//For both input and output use a { val, val, val } format. That will allow read_val() to also handle the S<vector<int>> variable.
//Remember to test after each step.

#include "std_lib_facilities.hpp"
using namespace std;
template<typename T,typename U>
void read_val(T& v, U p)
{
    cin >> p;
    v = T(p);

}
template<class T>
class S
{   T val;
public:
    S(){}
    S(T val)
    {
        this -> val = val;
    }

    S<T> operator=(const T& a)
    {
        val = a;
        return *this;
    }
    T& get();
    T const const_get(){
        return val;
    }


};
template<typename T>
T& S<T>:: get(){
    return val;
}
int main()
{
    S<int> s1(10);
    S<char> s2('o');
    S<double> s3(2.5);
    S<string> s4("text");
    s4 = "babcia";
    S<vector<int>> s5(vector<int >{1,2,4});
    int& v1 = s1.get();
    char v2 = s2.get();
    double v3 = s3.const_get();
    string v4 = s4.get();
    vector<int> v5  = s5.get();
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << v4 << endl;
    cout << "VECTOR" << endl;
    for(int elem : v5)
    {
        cout << elem << endl;
    }
    int i;
    char c;
    double d;
    string s;
    read_val(s1, i);
    read_val(s2, c);
    read_val(s3, d);
    read_val(s4, s);

    return 0;
}
