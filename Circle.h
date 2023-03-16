
#ifndef SHAPECALCULATOR_CIRCLE_H
#define SHAPECALCULATOR_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r);

    double area() override ;

    void display() override;
};

#endif //SHAPECALCULATOR_CIRCLE_H
