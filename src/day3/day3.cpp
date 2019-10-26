#include "iostream"
using namespace std;

/*
编写带实数 r 和整数 n 两个参数的函数并输出 r 的 n 次幂
*/

double pow(double r, int n) {
    double res = 1.0;
    for (int i = 0; i < n; i++) {
        res *= r;
    }
    return res;
}

int main() {
    double r;
    int n;
    cout << "r = ";
    cin >> r;
    cout << "n = ";
    cin >> n;
    cout << "r^n = " << pow(r, n) << endl;
    system("pause");
    return 0;
}