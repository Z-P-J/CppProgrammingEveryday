#include "Triangle.h"
#include "math.h"

Triangle::Triangle(double sizeA, double sizeB, double sizeC) 
    : size_a_(sizeA), size_b_(sizeB), size_c_(sizeC) {
    double p = (size_a_ + size_b_ + size_c_) / 2;
    s_ = sqrt(p * (p - size_a_) * (p - size_b_) * (p - size_c_));
}

Triangle::~Triangle() {
}

void Triangle::Output(std::ofstream *file) {
    *file << "sizeA: " << size_a_ << "    sizeB: " << size_b_ << "    sizeC: " << size_c_ << "    S: " << s_ << std::endl;
}