#include "iostream"
using namespace std;

/*
求PI，PI = 1 + 1/3 + 1/3*2/5 + 1/3*2/5*3/7....
*/

int main() {
    int i, j;
    double pi, t;
    i = 0;
    j = 1;
    t = 1;
    pi = 0;
    while (t > 1e-18) {
        pi += t;
        i += 1;
        j += 2;
        t = t * i / j;
    }
    cout << 2 * pi << endl;
    system("pause");
    return 0;
}