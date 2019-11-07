#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle : public Point {
private:
    const static double P;
public:
    Circle();
    Circle(Point point);
    Circle(double angle, double length);
    ~Circle();
    double GetRadius();
    double GetDiameter();
    double GetS();
};


#endif