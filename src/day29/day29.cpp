#include "iostream"
using namespace std;

/*
输入若干个数，输入-999表示结束，求平均值和最大值
*/

int main() {
    double total = 0;
    double max;
    int count = 0;
    double num;
    while(true) {
        cin >> num;
        if (num == -999) {
            break;
        }
        total += num;
        count++;
        if (count == 1 || num > max) {
            max = num;
        }
    }
    cout << "total = " << total << " max = " << max << endl;
    system("pause");
    return 0;
}