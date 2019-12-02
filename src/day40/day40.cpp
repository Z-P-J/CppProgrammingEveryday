#include "iostream"
using namespace std;

/*
编写一个函数,确定一个整数是否为完全数(一个数,等于他的因子之和)。
用这个函数确定和打印1到1000之间的所有完全数。
*/

bool isPerfectNumber(int num) {
    if (num < 2) {
        return false;
    }
    int temp = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            temp += i;
        }
    }
    return temp == num;
}

int main() {
    for (int i = 1; i < 1001; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}