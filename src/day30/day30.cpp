#include "iostream"
using namespace std;

/*

*/

int main() {
    double result = 0;
    for (int i = 1; i < 101; i++) {
        result += (i * i);
        cout << i << " * " << i;
        if (i == 100) {
            cout << " = ";
        } else {
            cout << " + ";
        }
    }
    cout << result << endl;
    system("pause");
    return 0;
}