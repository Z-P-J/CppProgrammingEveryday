#include "RightTriangle.h"
#include "iostream"
#include "math.h"
using namespace std;

RightTriangle::RightTriangle() : Line() {
    cout << "Please input the length of line:";
    cin >> length2_;
    length3_ = sqrt(length1_ * length1_ + length2_ * length2_);
}

RightTriangle::RightTriangle(double length1, double length2) 
    : Line(length1), length2_(length2) {
    length3_ = sqrt(length1 * length1 + length2 * length2);
}

RightTriangle::~RightTriangle() {
}

void RightTriangle::Print() {
    cout << "length1 = " << length1_
        << " length2 = " << length2_ 
        << " length3 = " << length3_ << endl;
}