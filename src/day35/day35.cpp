#include "iostream"
using namespace std;

/*
求PI，PI/4 = 1 - 1/3 + 1/5 - 1/7 ...
*/

int main() {
    int i = 1;
    double one = 1;
    double temp = 1;
    double pi = 0;
    while (i < 10000000) {
        temp = one / i;
        one = -one;
        pi += temp;
        i += 2;
        // cout << "i = " << i << "  temp = " << temp << endl;
    }
    cout << "PI = " << pi * 4 << endl;
    system("pause");
    return 0;
}