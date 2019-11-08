#include "iostream"
#include "Line.cpp"
#include "RightTriangle.cpp"
#include "Rectangle.cpp"
using namespace std;

/*
设计一个线段基类，当创建无参数对象时，才要求用户输入长度。
同样，其派生的直角三角形类也是在产生对象时要求输入两个直角边的长度。
直角三角形在派生矩形类，矩形类的参数也由键盘输入。设计这些类并测试他们的功能。
*/

int main() {
    Line *line = new Line();
    cout << "length of line is " << line->GetLength() << endl;
    RightTriangle *rightTriangle = new RightTriangle();
    rightTriangle->Print();
    Rectangle rectangle(1, 2);
    rectangle.Print();
    Rectangle *rectangle2 = new Rectangle();
    rectangle2->Print();
    system("pause");
    return 0;
}