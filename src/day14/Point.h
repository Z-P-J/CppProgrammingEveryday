#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x_, y_;
public:
    Point();
    Point(int x, int y);
    ~Point();

    void SetXY(int x, int y);

    int GetX() {
        return x_;
    }

    int GetY() {
        return y_;
    }
};

#endif