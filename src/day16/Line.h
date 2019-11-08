#ifndef LINE_H
#define LINE_H

class Line
{
protected:
    double length1_;
public:
    Line();
    Line(double length);
    ~Line();
    double GetLength();
    void Print();
};

#endif