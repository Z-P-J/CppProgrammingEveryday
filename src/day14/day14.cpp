#include "iostream"
#include "Point.cpp"
#include "Line.cpp"
#include "Rectangle.cpp"
using namespace std;

/*
定义一个线段类作为矩形的基类，基类有起点和终点坐标，
有获取线段长度以及线段和 x 轴的夹角的成员函数。
矩线段对象的两个坐标作为自己一条边的位置，
它具有另外一条边，能输出矩形的 4 个顶点坐标。
给出类的定义并用程序验证它们的功能。
*/

int main() {
    Point point1(0, 0);
    Point point2(1, 1);
    Point point3(0, 2);
    Point point4(-1, -1);
    Line line(point1, point2);
    cout << "Lenght of line is " << line.GetLenght() << endl;
    cout << "Angle of line with x-line is " << line.GetAngle() << endl;
    Rectangle rectangle(point1, point2, point3, point4);
    rectangle.PrintPoint();
    system("pause");
    return 0;
}