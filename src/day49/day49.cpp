#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

/*
掷骰子10000次，统计得到各点数的次数。
*/

int main() {
    int a[6] = {0};
    srand(time(NULL));
    for (int i = 0; i < 10000; i++) {
        int num = rand() % 6;
        a[num] = a[num] + 1;
    }
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ": " << a[i] << endl;
    }
    system("pause");
    return 0;
}