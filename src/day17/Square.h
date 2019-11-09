#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

template<class T>
class Square : public Rectangle<T> {
public:
    Square(T length);
    ~Square();
    void Print();
};

#endif