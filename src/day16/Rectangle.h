#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "RightTriangle.h"

class Rectangle : public RightTriangle {
protected:
    double length4_;
public:
    Rectangle();
    Rectangle(double length1, double length2);
    ~Rectangle();

    void Print();
};


#endif