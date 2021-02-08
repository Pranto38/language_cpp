/*
Name:Pranto
Student ID:1902134
Program:
Description: Ex 1.3-Calculation of the surface and the volume of a cone
*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    float radius, height,volume;
    cout<<"Enter the value of radius: ";
    cin>> radius;
    cout<<"Enter the value of height: ";
    cin>> height;
    //(a)Volume calculation of a solid cone
    volume=(M_PI * pow(radius,2)* height)/3;
    if(radius>0 and height>0)
    {
        cout << "Volume of the solid cone: " << volume << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    //(b)Slant height calculation of a solid cone
    double c= sqrt(pow(radius,2)+ pow(height,2));
    cout << "Slant height of the solid cone: " << c << endl;
    //(c)base area
    double base_area=M_PI * pow(radius,2);
    cout << "base area of the solid cone: " << base_area << endl;
    //(c)lateral area
    double lateral_area=M_PI * radius *c;
    cout << "lateral area of the solid cone: " << lateral_area << endl;
    //(c)Cone's total surface area
    double total_surface_area=base_area+lateral_area;
    cout << "Total surface area of the solid cone: " << total_surface_area << endl;

    cin.get();

}
