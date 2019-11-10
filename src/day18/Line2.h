#ifndef LINE2_H
#define LINE2_H

#include "Point.h"

template<class T>
class Line2 {
private:
    Point<T> point1_;
    Point<T> point2_; 
public:
    Line2(T x1, T y1, T x2, T y2);
    ~Line2();
    void Print();
};


#endif