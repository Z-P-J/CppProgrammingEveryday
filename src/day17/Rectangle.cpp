#include "Rectangle.h"
#include "iostream"
using namespace std;

template<class T> 
Rectangle<T>::Rectangle(T width, T height) 
    : width_(width), height_(height) {
}

template<class T> 
Rectangle<T>::~Rectangle() {
}

template<class T> 
void Rectangle<T>::Print() {
    cout << "Rectangle: width = " << width_ << " height = " << height_ << endl;
}