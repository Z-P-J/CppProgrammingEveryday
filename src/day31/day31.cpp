#include "iostream"
using namespace std;

/*
印度国王的奖励问题，求和s = 2^0 + 2^1 + 2^3 + ... + 2^63
*/

int main() {
    double s = 0;
    double temp = 1;
    s += temp;
    for (int i = 0; i < 63; i++) {
        temp *= 2;
        s += temp;
    }
    cout << "s = " << s << endl;
    system("pause");
    return 0;
}