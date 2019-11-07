#include "iostream"
#include "Point.cpp"
#include "Circle.cpp"
using namespace std;

/*
基类是使用极坐标的点类，从它派生一个圆类，圆类用点类作圆心，
圆周通过极坐标原点，圆类有输出圆直、半径和面积的成员函数。
完成类的设计并验证之。
*/

int main() {
    Point point(45, 2);
    Circle circle(point);
    cout << "The radius of circle is: " << circle.GetRadius() << endl;
    cout << "The diameter of circle is: " << circle.GetDiameter() << endl;
    cout << "The S of circle is: " << circle.GetS() << endl;
    system("pause");
    return 0;
}