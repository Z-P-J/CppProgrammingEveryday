#include "iostream"
#include "math.h"
using namespace std;

/*
编写一个求方程aX2 + bx + c = 0的根的程序，
要求从控制台输入a, b, c的值并输出结果
*/

int main()
{
    cout << "Hello World!" << endl;
    double a, b, c;
    cout << "请输入a, b, c的值：";
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / 2 / a;
        double x2 = (-b - sqrt_delta) / 2 / a;
        cout << "x1 = " << x1 << "\tx2 = " << x2 << endl;
    } 
    else if (delta == 0)
    {
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / 2 / a;
        cout << "x1 = x2 = " << x1 << endl;
    } 
    else 
    {
        double sqrt_delta = sqrt(-delta);
        double positive = -b / 2 / a;
        double negative = abs(sqrt_delta / 2 / a);
        cout << "x1 = " << positive << " + " << negative << "i"
        << "\tx2 = " << positive << " - " << negative << "i" << endl;
    }
    system("pause");
}