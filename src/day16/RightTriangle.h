#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "Line.h"

class RightTriangle : public Line {
protected:
    double length2_, length3_;
public:
    RightTriangle();
    RightTriangle(double line1, double line2);
    ~RightTriangle();

    void Print();
};


#endif