#include "iostream"
using namespace std;

/*
写一函数，计算x的y次方(假设x，y都是正整数)
*/

double fun(int x, int y) {
    double result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    cout << "9^10 = " << fun(9, 10) << endl;
    system("pause");
    return 0;
}