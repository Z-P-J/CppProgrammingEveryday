#include "iostream"
using namespace std;

/*
写一函数，求斐波那契数列的第n项。
*/

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "fib(5) = " << fib(5) << endl;
    cout << "fib(10) = " << fib(10) << endl;
    cout << "fib(20) = " << fib(20) << endl;
    system("pause");
    return 0;
}