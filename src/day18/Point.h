#ifndef POINT_H
#define POINT_H

template<class T>
class Point {
protected:
    T x_;
    T y_;
public:
    Point(T x = 0, T y = 0);
    ~Point();
    void Print();

    T GetX() {
        return x_;
    }
    
    T GetY() {
        return y_;
    }
};


#endif