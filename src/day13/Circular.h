#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "Basic.h"

class Circular : public Basic {

private:
    double radius_;
    double height_;
    static const double P;

public:
    Circular();
    Circular(double radius, double height);
    ~Circular();

    double GetS() override;
    double GetV() override;

};


#endif