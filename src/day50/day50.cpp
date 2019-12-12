#include "iostream"
#include "math.h"
using namespace std;

/*
编写函数distance，计算两点（x1，y1）和（x2，y2）之间的距离。
*/

double distance(double x1, double y1, double x2, double y2) {
    double deltaX = x1 - x2;
    double deltaY = y1- y2;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    cout << "The distance between point (2, 3) and point (4, 5) is " << distance(2, 3, 4, 5) << endl;
    system("pause");
    return 0;
}