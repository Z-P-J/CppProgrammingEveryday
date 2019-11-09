#ifndef RECTANGLE_H
#define RECTANGLE_H

template<class T>
class Rectangle {
protected:
    T width_;
    T height_;
public:
    Rectangle(T width, T height);
    ~Rectangle();
    void Print();
};


#endif