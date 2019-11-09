#include "Square.h"
#include "iostream"
using namespace std;

template<class T>
Square<T>::Square(T length) : Rectangle<T>(length, length) {
}

template<class T>
Square<T>::~Square() {

}

template<class T>
void Square<T>::Print() {
    cout << "Square: width = height = " << this->width_ << endl;
}