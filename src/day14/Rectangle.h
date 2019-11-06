#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Line.h"

class Rectangle : public Line
{
private:
    Line line_;
public:
    Rectangle(Point a, Point b, Point c, Point d);
    ~Rectangle();
    void PrintPoint();
};

#endif
