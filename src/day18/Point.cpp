#include "Point.h"
#include "iostream"

template<class T>
Point<T>::Point(T x, T y) : x_(x), y_(y) {
}

template<class T>
Point<T>::~Point() {
}

template<class T>
void Point<T>::Print() {
    std::cout << "x = " << x_ << " y = " << y_ << std::endl;
}