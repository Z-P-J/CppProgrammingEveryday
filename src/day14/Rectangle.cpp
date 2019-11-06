#include "Rectangle.h"

Rectangle::Rectangle(Point a, Point b, Point c, Point d) : Line(a, b), line_(b, d) {
    
}

Rectangle::~Rectangle() {
}

void Rectangle::PrintPoint() {
    PrintXY();
    line_.PrintXY();
}