#include "iostream"
using namespace std;

/*

*/

int main() {
    double num;
    int count = 0;
    double max;
    double min;
    double total = 0;
    cout << "Please enter 20 numbers:";
    for (int i = 0; i < 20; i++) {
        cin >> num;
        count++;
        total += num;
        if (i == 0) {
            max = num;
            min = num;
        } else {
            if (num > max) {
                max = num;
            } else if (num < min) {
                min = num;
            }
        }
    }
    cout << "max = " << max << " min = " << min << " avg = " << (total / count) << endl;
    system("pause");
    return 0;
}