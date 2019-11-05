#include "iostream"
#include "Circular.cpp"
using namespace std;

/*
设计一个抽象基类，圆柱类继承自该抽象基类，
设计成员函数输出圆柱的面积和体积。
*/

int main() {
    Circular circular(3, 4);
    cout << "S of circular is " << circular.GetS() << endl;
    cout << "V of circular is " << circular.GetV() << endl;
    system("pause");
    return 0;
}