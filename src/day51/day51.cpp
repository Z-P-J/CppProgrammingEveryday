#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

/*
使用随机投针法估计PI的值
*/

int main() {
    srand(time(NULL));
    double in = 0;
    double total = 1000000;
    for (double i = 0; i < total; i++) {
        double randomX = rand() % 100 / (double)50 - 1;
        double randomY = rand() % 100 / (double)50 - 1;
        if (randomX * randomX + randomY * randomY <= 1) {
            in++;
        }
    }
    double pi = in / total * 4;
    cout << "pi = " << pi << endl;
    system("pause");
    return 0;
}