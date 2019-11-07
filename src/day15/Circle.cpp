#include "Circle.h"

const double Circle::P = 3.1415926;

Circle::Circle() :Point(0, 0) {
}

Circle::Circle(Point point) 
    : Point(point.GetAngle(), point.GetLength()) {

}

Circle::Circle(double angle, double length) 
    : Point(angle, length) {
}

Circle::~Circle() {
}

double Circle::GetRadius() {
    return GetLength();
}

double Circle::GetDiameter() {
    return 2 * GetRadius();
}
double Circle::GetS() {
    return P * GetRadius() * GetRadius();
}