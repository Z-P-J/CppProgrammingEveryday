#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "fstream"

class Triangle {
private:
    double size_a_, size_b_, size_c_;
    double s_;
public:
    Triangle(double sizeA, double sizeB, double sizeC);
    ~Triangle();
    void Output(std::ofstream *file);
};

#endif
