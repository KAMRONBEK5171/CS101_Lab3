#include <iostream>

#include <iostream>
using namespace std;
int main() {

    cout << "PROBLEM 1" << endl;

    int intNumber = 23;
    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
    float floatNumber = 3.14;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) <<endl;
    double doubleNumber = 45.1234;
    cout<< "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) <<endl;
    char charName = 'A';
    cout << "Value of char is " << charName << ". Size is " << sizeof(charName) << endl;
    bool boolean = true;
    cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;

    cout << " PROBLEM 2" << endl;
    cout << " Kamronbek Ismoilov " <<  endl;
    cout << " 230163 " << endl;
    cout << "  " << endl;
    cout << " " << endl;
    cout << " PROBLEM 3" << endl;

    cout << "\"I\'m standing\" on the edge of some crazy cliff.\n"
            "What I have to do, I have to catch everybody\\\n"
            "if they start to go over the cliff—I mean\\\n"
            "\\if they're running and they don't look\n"
            "where they're going I have to come out\n"
            "from somewhere and \tcatch them." << endl;

    cout << "PROBLEM 4" << endl;
    int a = 189;
    char  b= 'B';

    float  A = (float)a/3;
    int B= b;
    float C = ((a+b)/5);
    char D = b + (char)(a/10) -1;
    cout << A << ' ' << B << ' ' << C <<' '<<  D << endl;


    cout << "PROBLEM 5" << endl;
    int x ;
    int y ;
    int sum = x + y;
    int product = x * y;
    cout << " Sum=" << sum << endl;
    cout << " Product=" << product<< endl;


    cout << "PROBLEM 6" << endl;
    int value1 = 38, value2 = 73;
    int sum1 = value1 + value2;
    cout <<"sum: " << value1 << " + " << value2 << " = " << sum1 << endl;

    cout << "PROBLEM 7" << endl;
    float X = 2, Y = 5;
    float t = 3*(X*X + 3)/(Y/4 + 3);
    cout << " t = " << t << endl;

    cout << "PROBLEM 8" << endl;
    float diameter = 6.9;
    float pi = 3.14;
    //float area = (3/4)*(pi)*(di)
    cout<< "Area:" <<  (4)*(pi * (diameter*diameter/4)) << endl;


    cout << "PROBLEM 9 " << endl;
   float v1, v2, T;
   cout << "Please enter v1: ";
   cin >> v1;
   cout << "please enter v2: ";
   cin >> v2;
   cout << " enter time t: ";
   cin >> T;
   cout << "average accelaration = " << (v2-v1)/T << endl;

 cout << "Problem 10 "  << endl;
double D, F, P
cin >> D >> F >> P
    return 0;
}