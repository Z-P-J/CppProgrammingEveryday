#ifndef LINE1_H
#define LINE1_H

template<class T>
class Line1 : Point<T> {
protected:
    T x2_;
    T y2_;
public:
    Line1(T x1 = 0, T y1 = 0, T x2 = 0, T y2 = 0);
    ~Line1();
    void Print();
};


#endif