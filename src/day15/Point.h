#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double angle_;
    double length_;
public:
    Point();
    Point(double angle, double length);
    ~Point();

    double GetAngle() {
        return angle_;
    }

    double GetLength() {
        return length_;
    }
};


#endif