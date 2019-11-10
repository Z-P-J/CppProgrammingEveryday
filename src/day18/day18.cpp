#include "iostream"
#include "Point.cpp"
#include "Line1.cpp"
#include "Line2.cpp"
using namespace std;

/*
设计一个点的类模板，分别使用继承、包含的方法设计线段类模板，
要求演示构造函数和复制构造函数的设计方法，并用主程序验证之。
*/

int main() {
    Point<int> point(3, 5);
    point.Print();
    Line1<int> line1(2, 3, 4, 5);
    line1.Print();
    Line1<int> line1_bak(line1);
    line1_bak.Print();
    Line2<double> line2(1.3, 4.5, 6.0, 7.9);
    line2.Print();
    Line2<double> line2_bak(line2);
    line2_bak.Print();
    system("pause");
    return 0;
}