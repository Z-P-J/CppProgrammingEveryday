#include "Line.h"
#include "iostream"
#include "math.h"
using namespace std;

Line::Line() : Line(0, 0, 0, 0) {
}

Line::Line(double x1, double y1, double x2, double y2) 
    : Line(Point(x1, y1), Point(x2, y2)) {

}

Line::Line(Point start, Point end) 
    : point_start_(start), point_end_(end) {

}

Line::~Line() {
}

double Line::GetLenght() {
    double deltaX = point_start_.GetX() - point_end_.GetX();
    double deltaY = point_start_.GetY() - point_end_.GetY();
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

double Line::GetAngle() {
    if (point_start_.GetX() == point_end_.GetX()) {
        return 90;
    }
    if (point_start_.GetY() == point_end_.GetY()) {
        return 0;
    }
    double deltaX = point_start_.GetX() - point_end_.GetX();
    double deltaY = point_start_.GetY() - point_end_.GetY();
    return atan(deltaY / deltaX) * 180 / 3.1415926;
}

void Line::PrintXY() {
    cout << "point_start: (" << point_start_.GetX() << ", " << point_start_.GetY() << ")\t";
    cout << "point_end: (" << point_end_.GetX() << ", " << point_end_.GetY() << ")" << endl;
}