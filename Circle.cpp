
#include "Circle.h"
#include <iostream>
using std::cout;
using std::endl;


Circle::Circle(double r) : radius(r) {}

double Circle::area()  {
    return 3.14159 * radius * radius;
}

void Circle::display()  {
    cout << "Circle - Radius: " << radius << endl;
}