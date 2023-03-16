
#ifndef SHAPECALCULATOR_RECTANGLE_H
#define SHAPECALCULATOR_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w);

    double area() override ;

    void display() override ;
};


#endif //SHAPECALCULATOR_RECTANGLE_H
