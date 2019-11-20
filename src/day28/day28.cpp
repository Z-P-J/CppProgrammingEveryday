#include "iostream"
using namespace std;

/*
输入若干个数，设输入的第一个数为后面要输入的数的个数，求平均值和最大值
*/

int main() {
    int n;
    cin >> n;
    double total = 0;
    double max;
    double num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0) {
            max = num;
        } else {
            if (num > max) {
                max = num;
            }
        }
        total += num;
    }
    cout << "avg = " << total / n << " max = " << max << endl;;
    system("pause");
    return 0;
}