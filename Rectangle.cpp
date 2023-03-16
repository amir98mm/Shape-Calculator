
#include "Rectangle.h"
#include <iostream>
using std::cout;
using std::endl;

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::area()  {
    return length * width;
}

void Rectangle::display()  {
    cout << "Rectangle - Length: " << length << " Width: " << width << endl;
}