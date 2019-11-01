#ifndef LINE_H
#define LINE_H

class Line {

private:
    double a_;
    double b_;
    double c_;
public:
    Line(double a = 0, double b = 0, double c = 0);
    Line(double x1, double y1, double x2, double y2);
    ~Line();

    double GetA() {
        return a_;
    }

    double GetB() {
        return b_;
    }

    double GetC() {
        return c_;
    }

    void PrintLine() const;
    bool IsPointOnTheLine(double x1, double x2) const;
    double GetX(double y) const;
    double GetY(double x) const;
};


#endif