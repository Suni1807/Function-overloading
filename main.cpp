#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double area (double r)
{
    double circlearea;
    circlearea = M_PI*r*r/2 ;
    return circlearea;
}
double area (double a,double b,double c)
{
    double triarea,s;
    s = (a+b+c)/2;
    triarea = sqrt(s*(s-a)*(s-b)*(s-c));
    return triarea ;
}
double area (double l, double h)
{
    double recarea;
    recarea = l*h;
    return recarea;
}

int main()
{
    double r,a,b,c,l,h;
    string shape;
    cout << "Choose a shape among circle, triangle and rectangle whose area to be calculated:";
    cin >> shape;
    if (shape == "circle")
    {
        cout << "Enter radius of the circle: " ;
        cin >> r;
        cout << "Area of circle is "<< area(r) <<" sq.units.";

    }
    else if (shape=="triangle")
    {
        cout << "Enter the lengths of 3 sides of the triangle: " ;
        cin >> a;
        cin >> b;
        cin >> c;
        cout << "Area of triangle is "<< area(a,b,c) <<" sq.units." ;
    }
    else if (shape=="rectangle")
    {
        cout << "Enter the lengths of 2 sides of the rectangle:" ;
        cin >> l;
        cin >> h;
        cout << "Area of rectangle is "<< area(l,h) <<"  sq.units." ;
    }
    else
        cout << "Invalid entry";
    return 0;
}
