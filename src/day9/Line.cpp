#include "Line.h"
#include "iostream"
#include "windows.h"
using namespace std;

inline Line::Line(double a, double b, double c) {
    // a b c中最多有一个为0
    if (a * b == 0 && a * c == 0 && b * c == 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        cout << "Not a line! At most one of a, b, c is 0" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        throw -1;
    } else {
        a_ = a;
        b_ = b;
        c_ = c;
    }
}

inline Line::Line(double x1, double y1, double x2, double y2) {
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    if (deltaX == 0 && deltaY == 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        cout << "Not a line! Two different points determine a straight line!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        throw -1;
    } else if (deltaY == 0) {
        a_ = 0;
        b_ = 1;
        c_ = -y1;
    } else if (deltaX == 0) {
        b_ = 0;
        a_ = 1;
        c_ = -x1;
    } else {
        a_ = deltaY;
        b_ = -deltaX;
        c_ = deltaX * y1 - deltaY * x1;
    }
}

Line::~Line() {
}

inline void Line::PrintLine() const {
    if (c_ == 0) {
        cout << a_ << "x";
        if (b_ < 0) {
            cout << " - " << -b_;
        } else {
            cout << " + " << b_;
        }
        cout << "y";
    } else if (a_ * b_ == 0) {
        if (a_ == 0) {
            cout << b_ << "y";
        } else if (b_ == 0) {
            cout << a_ << "x";
        }
        if (c_ < 0) {
            cout << " - " << -c_;
        } else {
            cout << " + " << c_;
        }
    } else {
        cout << a_ << "x";
        if (b_ < 0) {
            cout << " - " << -b_;
        } else {
            cout << " + " << b_;
        }
        if (c_ < 0) {
            cout << "y - " << -c_;
        } else {
            cout << "y + " << c_;
        }
    }
    cout << " = 0" << endl;
}

inline bool Line::IsPointOnTheLine(double x1, double x2) const {
    return a_ * x1 + b_ * x2 + c_ == 0;
}

inline double Line::GetX(double y) const {
    if (a_ == 0) {
        if (b_ * y + c_ == 0) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            cout << "There are infinite xs!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            throw -1;
        } else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            cout << "The point is not on the line!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            throw -1;
        }
    } else {
        if (b_ == 0) {
            return -c_ / a_;
        } else {
            return (-c_ - b_ * y) / a_;
        }
    }
}

inline double Line::GetY(double x) const {
    if (b_ == 0) {
        if (a_ * x + c_ == 0) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            cout << "There are infinite ys!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            throw -1;
        } else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            cout << "The point is not on the line!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            throw -1;
        }
    } else {
        if (a_ == 0) {
            return -c_ / b_;
        } else {
            return (-c_ - a_ * x) / b_;
        }
    }
}