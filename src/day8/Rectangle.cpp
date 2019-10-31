#include "Rectangle.h"
#include "iostream"
using namespace std;

Rectangle::Rectangle() : 
    p1(Point()), 
    p2(Point()), 
    p3(Point()), 
    p4(Point()) {

}

Rectangle::Rectangle(Point point1, Point point2) : 
    p1(point1), 
    p2(Point(point1.GetX(), point2.GetY())), 
    p3(point2), 
    p4(Point(point2.GetX(), point1.GetY())) {

}

Rectangle::~Rectangle() {}

void Rectangle::PrintPoint() {
    cout << "A: (" << p1.GetX() << ", " << p1.GetY() << ")" << endl;
    cout << "B: (" << p2.GetX() << ", " << p2.GetY() << ")" << endl;
    cout << "C: (" << p3.GetX() << ", " << p3.GetY() << ")" << endl;
    cout << "D: (" << p4.GetX() << ", " << p4.GetY() << ")" << endl;
}

int Rectangle::GetArea() {
    int s = (p1.GetX() - p3.GetX()) * (p1.GetY() - p3.GetY());
    if (s >= 0) {
        return s;
    } else {
        return -s;
    }
}