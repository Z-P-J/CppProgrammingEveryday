#include "Line2.h"
#include "iostream"
using namespace std;

template<class T>
Line2<T>::Line2(T x1, T y1, T x2, T y2) 
    : point1_(x1, y1), point2_(x2, y2) {
}

template<class T>
Line2<T>::~Line2() {
}

template<class T>
void Line2<T>::Print() {
    cout << "x1 = " << point1_.GetX() << " y1 = " << point1_.GetY() << " x2 = " << point2_.GetX() << " y2 = " << point2_.GetY() << endl;
}