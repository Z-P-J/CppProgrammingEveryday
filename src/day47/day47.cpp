#include "iostream"
using namespace std;

/*
写一函数，交换两个整型变量的值
*/

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "a=" << a << " b=" << b << endl;
    swap(&a, &b);
    cout << "a=" << a << " b=" << b << endl;
    system("pause");
    return 0;
}