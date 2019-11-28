#include "iostream"
using namespace std;

/*
输入20个数，统计其中正数、负数和0的个数。
*/

int main() {
    double num;
    int zero = 0;
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < 20; i++) {
        cin >> num;
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    cout << "positive number: " << positive << endl;
    cout << "negative num: " << negative << endl;
    cout << "zero: " << zero << endl;
    system("pause");
    return 0;
}