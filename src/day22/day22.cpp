#include "iostream"
#include "fstream"
#include "math.h"
using namespace std;

/*
编写一个程序，要求输入三角形的 3 条边，
然后判断是否合理，如果不合理，给出信息并要求重新输入；
如果合理，计算其面积并将结果存入文件中。
*/

int main() {
    while (true) {
        cout << "Please input the length of the three sides of a triangle: " << endl;
        double a, b, c;
        cin >> a >> b >> c;
        if (a > 0 
            && b > 0 
            && c > 0 
            && a + b > c 
            && b + c > a 
            && a + c > b) {
            double p = (a + b + c) / 2;
            double s = sqrt(p * (p - a) * (p - b) * (p - c));
            cout << "The s of the triangle is " << s << endl;
            ofstream file;
            file.open("./src/day22/triangles.txt", ios::app);
            if (file.fail()) {
                cout << "The file open failed!" << endl;
            } else {
                file << "a = " << a << ", b = " << b << ", c = " << c << ";    S = " << s << endl;
                break;
            }
        } else {
            cout << "The length of the three sides what you input is valid!" << endl;
        }
    }
    system("pause");
    return 0;
}