#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line {
private:
    Point point_start_;
    Point point_end_;
public:
    Line();
    Line(Point start, Point end);
    Line(double x1, double y1, double x2, double y2);
    ~Line();
    double GetLenght();
    double GetAngle();
    void PrintXY();
};


#endif