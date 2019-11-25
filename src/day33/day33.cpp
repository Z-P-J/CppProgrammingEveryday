#include "iostream"
using namespace std;

/*
求和s = 1/1! + 1/2! + 1/3! + ... + 1/10!
*/

int main() {
    int i;
    double total = 0;
    double temp = 1;
    for (i = 1; i <= 10; i++) {
        temp /= i;
        total += temp;
    }
    cout << "Total = " << total << endl;
    system("pause");
    return 0;
}