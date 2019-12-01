#include "iostream"
using namespace std;

/*
求水仙花数，即一个三位数，其各位数字立方和等于数字本身
*/

int main() {
    for (int i = 100; i < 1000; i++) {
        int a = i / 100;
        int b = i % 100 / 10;
        int c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}