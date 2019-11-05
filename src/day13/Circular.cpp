#include "Circular.h"

const double Circular::P  = 3.1415926;

Circular::Circular() : Circular(0, 0) {
}

Circular::Circular(double radius, double height) 
    : radius_(radius), height_(height) {
}

Circular::~Circular() {
}

double Circular::GetS() {
    return P * radius_ * radius_ * 2 + 2 * P * radius_ * height_;
}

double Circular::GetV() {
    return P * radius_ * radius_ * height_;
}