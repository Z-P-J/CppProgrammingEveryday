#include "iostream"
using namespace std;

/*
输入若干个数，计算其中奇数之和以及其偶数之和。输入0时表示结束。
*/

int main() {
    int sum1 = 0;
    int sum2 = 0;
    int num;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            sum1 += num;
        } else {
            sum2 += num;
        }
    }
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    system("pause");
    return 0;
}