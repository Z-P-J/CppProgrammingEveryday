#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle {
private:
    /* data */
    Point p1;
    Point p2;
    Point p3;
    Point p4;

public:
    Rectangle(/* args */);
    Rectangle(Point point1, Point point2);
    ~Rectangle();

    void PrintPoint();
    int GetArea();
};

#endif
