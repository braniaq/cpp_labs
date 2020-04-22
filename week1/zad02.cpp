//
//  zad2.cpp
//  ojp
//
//  Created by Jakub Branicki on 02/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//

#include "std_lib_facilities.hpp"
using namespace std;
int main()
{
    cout << "Please enter name of a person you want to write to (followed by 'enter'):\n";
    string first_name, friend_name, my_name= "Kuba";
    char friend_sex = 0;
    int age;
    cin >> first_name;
    cout << "enter the name of your friend \n";
    cin >> friend_name;
    cout << "enetr gender of your friend, 'f' if she's female or 'm' if he's a male";
    cin >> friend_sex;
    cout << "please enter your friends age";
    cin >> age;
    cout << "Dear " << first_name << ",\n"<< "How are you? I am fine. I miss you.\n";
    cout << " have you seen "<< friend_name << " lately?\n";
    if(friend_sex == 'm')
    {
        cout << "If you see "<<friend_name<<" please ask him to call me.\n";
    }
    if (friend_sex == 'f')
    {
        cout<< "If you see "<<friend_name <<" please ask her to call me.\n";
    }
    if( age <=0  || age >= 110 ) { simple_error("you're kidding");}
    cout << "I hear you just had a birthday and you are "<< age<< " years old.\n";
    if ( age < 12) { cout << "Next year you will be "<< age+1<< endl;}
    if ( age == 17) { cout << "Next year you will be able to vote. \n";}
    if ( age > 70) { cout << "I hope you are enjoying retirement. \n";}
    cout << endl;
    cout << endl;
    cout<< "Yours sincerely, "<< my_name<<endl;
    return 0;
    
}
