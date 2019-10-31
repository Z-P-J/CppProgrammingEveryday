#include "Point.h"

Point::Point(/* args */) : x_(0), y_(0) {

}

Point::Point(int x, int y) : x_(x), y_(y) {
    
}

Point::~Point() {}

void Point::SetXY(int x, int y) {
    x_ = x;
    y_ = y;
}