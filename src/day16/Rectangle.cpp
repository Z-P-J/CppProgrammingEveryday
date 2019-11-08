#include "Rectangle.h"
#include "iostream"
using namespace std;

Rectangle::Rectangle() : RightTriangle() {
    length3_ = length1_;
    length4_ = length2_;
}

Rectangle::Rectangle(double length1, double length2) 
    : RightTriangle(length1, length2) {
    length3_ = length1_;
    length4_ = length2_;
}

Rectangle::~Rectangle() {

}

void Rectangle::Print() {
    cout << "length1 = " << length1_
        << " length2 = " << length2_ 
        << " length3 = " << length3_ 
        << " length4 = " << length4_ << endl;
}