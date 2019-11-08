#include "Line.h"
#include "iostream"
using namespace std;

Line::Line(/* args */) {
    cout << "Please input the length of line:";
    cin >> length1_;
}

Line::Line(double length) : length1_(length) {

}

Line::~Line() {
}

double Line::GetLength() {
    return length1_;
}

void Line::Print() {
    cout << "length1 = " << length1_ << endl;
}
