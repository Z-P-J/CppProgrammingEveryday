#include "iostream"
using namespace std;

/*
写一个函数，取一个整数值并返回将此整数的各数字反序的数值
*/

int reverse(int num) {
    int s = 0;
    while(num) {
        s = s * 10 + num % 10;
        num /= 10;
    }
    return s;
}

int main() {
    cout << "The reverse of 12345 is " << reverse(12345) << endl;
    system("pause");
    return 0;
}