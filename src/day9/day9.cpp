#include "iostream"
#include "windows.h"
#include "Line.cpp"
#include "string"

using namespace std;

/*
使用内联函数设计一个类，用来表示直角坐标系中
的任意一条直线并输出它的属性。
*/

int main() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    Line line1(1, 2, 3);
    Line line2(1, 2, 4, 5);
    line1.PrintLine();
    line2.PrintLine();
    try {
        Line line3(0, 0, 0);
    } catch(int c) {
    }
    try {
        Line line4(1, 2, 1, 2);
    } catch(int c) {
    }
    cout << "Is Point(1, 2) on the line1? " << line1.IsPointOnTheLine(1, 2) << endl;
    cout << "Is Point(1, 2) on the line2? " << line2.IsPointOnTheLine(1, 2) << endl;
    cout << "x of the point P on the line1 is 1, the y of the point P is " << line1.GetY(1) << endl;
    cout << "y of the point P on the line2 is 4, the y of the point P is " << line2.GetX(4) << endl;
    system("pause");
    return 0;
}