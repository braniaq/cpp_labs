//
//  zad04.cpp
//  ojp
//
//  Created by Jakub Branicki on 24/03/2020.
//  Copyright © 2020 BRNQ. All rights reserved.
//1. Start a program called Test_output.cpp. Declare an integer birth_year and assign it the year you were born.
//2. Output your birth_year in decimal, hexadecimal, and octal form.
//3. Label each value with the name of the base used.
//4. Did you line up your output in columns using the tab character? If not,
//do it.
//5. Now output your age.
//6. Was there a problem? What happened? Fix your output to decimal.
//7. Go back to 2 and cause your output to show the base for each output.
//8. Try reading as octal, hexadecimal, etc.:
//cin >> a >>oct >> b >> hex >> c >> d;
//cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
//Run this code with the input
//1234 1234 1234 1234
//Explain the results.
//9. Write some code to print the number 1234567.89 three times, first using
//defaultfloat, then fixed, then scientific forms. Which output form pre-
//sents the user with the most accurate representation? Explain why.
//10. Make a simple table including last name, first name, telephone number, and email address for yourself and at least five of your friends. Experi- ment with different field widths until you are satisfied that the table is well
//presented.

#include "std_lib_facilities.hpp"

int main()
{
    int birth_year = 1999;
    cout << birth_year << showbase<< "\t" << hex << birth_year << showbase<<  "\t" << oct << birth_year << showbase<< "\t";
    cout << dec << 2020 - 1999 << endl;
    int a,b,c,d;
    cin >> a >>oct >> b >> hex >> c >> d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
    float num = 1234567.89;
    cout << num << "\t(defaultfloat)\n"
    <<fixed << num <<"\t(fixed)\n"
    << scientific<< num << "\t(scientific)\n";
    
    cout <<setw(12)<<  "branicki\t" <<setw(10)<<  "jakub\t" <<setw(9)<<  "562333222\t" << "testowy@test.pl\n";
    cout <<setw(12)<< "malinowska\t" <<setw(10)<<  "janina\t" <<setw(9)<<  "111111111\t" << "malgosia@test.pl\n";
    cout <<setw(12)<< "tomczak\t" <<setw(10)<< "krzysiek\t" <<setw(9)<<  "202020090\t" << "destruktor78@test.pl\n";
    cout <<setw(12)<< "iwanowska\t" <<setw(10)<<  "monika\t" <<setw(9)<<  "123321123\t" << "alefajnyemail@test.pl\n";
    cout <<setw(12)<< "alekej\t" <<setw(10)<<  "tomek\t" <<setw(9)<<  "666666999\t" << "bolimnielokiecemail@test.pl\n";
    cout <<setw(12)<< "szydlowski\t" <<setw(10)<<  "mateusz\t" <<setw(9)<<  "505050505\t" << "supertestowyemail@test.pl\n";
    return 0;
}
