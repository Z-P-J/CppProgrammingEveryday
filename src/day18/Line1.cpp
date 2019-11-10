#include "Line1.h"
#include "iostream"
using namespace std;

template<class T>
Line1<T>::Line1(T x1, T y1, T x2, T y2) 
    : Point<T>(x1, y1), x2_(x2), y2_(y2) {
}

template<class T>
Line1<T>::~Line1() {
}

template<class T>
void Line1<T>::Print() {
    cout << "x1 = " << this->x_ << " y1 = " << this->y_ << " x2 = " << x2_ << " y2 = " << y2_ << endl;
}