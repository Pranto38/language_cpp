/*
Name:Pranto
Student ID:1902134
Program:
Description: Quadratic equation solution
*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    float a,b,c,x,y;
    cout<<"Enter the value of a: ";
    cin>> a;
    cout<<"Enter the value of b: ";
    cin>> b;
    cout<<"Enter the value of c: ";
    cin>> c;
    y= pow(b,2) - 4*a*c;
    //invalid equation
    if(a==0 and b==0)
    {
        cout << "Not a valid equation" << endl;
    }
    ////real roots of the quadric equation
    else if (a==0 and b!=0)
    {
        x= -(c/b);
        cout << "Solution of the equation: " << x << endl;
    }
    //imaginary roots of the equation
    else if ( y<0){
        cout << "Not real solution" << endl;
    }
    //real roots of the quadric equation
    else if (y>=0){
           float x1,x2;
       x1=(-b+sqrt(y))/(2*a);
       x2=(-b-sqrt(y))/(2*a);
        cout << "Solution of the equation are: " << x1 <<" and " << x2 << endl;

    }

        cin.get();

}
