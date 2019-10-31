#include "iostream"
#include "Point.cpp"
#include "Rectangle.cpp"

using namespace std;

/*
设计一个点类 Point ，再设计一个矩形类，
矩形类使用 Point 类的 两个坐标点作为矩形的对角顶点 。
并可以输出 4 个坐标值和面积。使用测试程序验证程序。
*/

int main() {
    Point p1(1, 6);
    Point p2(4, 3);
    Rectangle rectangle(p1, p2);
    rectangle.PrintPoint();
    cout << "S of rectangle is " << rectangle.GetArea() << endl;
    system("pause");
    return 0;
}