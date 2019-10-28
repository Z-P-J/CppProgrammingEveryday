#include "iostream"
#define swap(a, b) {a = a + b; b = a - b; a = a - b;}
using namespace std;

/*
用函数模板实现 3 个数值中按最小值到最大值排序的程序
*/

template <typename T>
void sort(T x, T y, T z) {
    if (x > y) {
        swap(x, y);
    }
    if (x > z) {
        swap(x, z);
    }
    if (y > z) {
        swap(y, z);
    }
    cout << "result:" << x << " " << y << " " << z << endl;
}

template <typename T>
void sortByPoint(T *x, T *y, T *z) {
    if (*x > *y) {
        swap(*x, *y);
    }
    if (*x > *z) {
        swap(*x, *z);
    }
    if (*y > *z) {
        swap(*y, *z);
    }
}

int main() {
    // int x, y, z;
    double x, y, z;
    cout << "Please input the value of x, y and z:";
    cin >> x >> y >> z;
    sort(x, y, z);

    // sortByPoint(&x, &y, &z);
    // cout << "result:" << x << " " << y << " " << z << endl;
    system("pause");
    return 0;
}