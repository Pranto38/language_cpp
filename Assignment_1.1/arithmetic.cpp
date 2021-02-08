/*
Name:Pranto
Student ID:1902134
Program:
Description: Arithmetic
*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    float a=0,b=0,sum,substraction,product,division,square,product1;

    cout << "Enter the value of a= ";
    cin  >> a;
    cout << "Enter the value of b= ";
    cin  >> b;
    //Arithmetic calculations
    sum= a+b;
    substraction= a-b;
    product= a*b;
    division= a/b;
    square= pow(sum,2);
    product1= sum * substraction ;

    cout << "The result of a+b= " << sum
    << "\nThe result of a-b= " << substraction
    << "\nThe result of a*b= " << product
    << "\nThe result of a/b= " << division
    << "\nThe result of square of (a+b)= " << square
    << "\nThe result of(a+b)*(a-b)= " << product1;

    cin.get();

}
