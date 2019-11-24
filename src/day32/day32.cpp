#include "iostream"
using namespace std;

/*
求和s = 1! + 2! + 3! + ... + 10!
*/

int main() {
    double total = 0;
    double temp = 1;
    int i;
    for (i = 1; i <= 10; i++) {
        temp *= i;
        total += temp;
    }
    cout << "total = " << total << endl;
    system("pause");
    return 0;
}