#include "iostream"
#include "math.h"
using namespace std;

/*
写一函数，判断某个数是否素数，以及求1一1000之内的素数
*/

bool isPrimeNum(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i < 1001; i++) {
        if (isPrimeNum(i)) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}