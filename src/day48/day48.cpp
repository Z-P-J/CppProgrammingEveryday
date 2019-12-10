#include "iostream"
using namespace std;

/*
打印杨辉三角形（帕斯卡三角形），打印10行。
*/

int main() {
    int arr[10];
    int i;
    int j;
    arr[0] = 1;
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        if (i != 9) {
            for (j = i + 1; j >= 0; j--) {
                if (j == 0 || j == i + 1) {
                    arr[j] = 1;
                } else {
                    // cout << "j = " << j << " arr[j] = " << arr[j] << " arr[j - 1] = " << arr[j -1] << endl;
                    arr[j] = arr[j] + arr[j - 1];
                }
            }
        }
    }
    system("pause");
    return 0;
}