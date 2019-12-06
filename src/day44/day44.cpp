#include "iostream"
using namespace std;

/*
求一个整数的各位数之和的函数
*/

int sum(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    cout << "The sum of each number of 345687 is " << sum(345687) << endl; 
    system("pause");
    return 0;
}