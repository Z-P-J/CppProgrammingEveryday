#include "iostream"
using namespace std;

/*
输入一个成绩，打印相应的等级
*/

int main() {
    int score;
    cout << "Please enter your score:" << endl;
    cin >> score;
    if (score >= 90) {
        cout << 'A' << endl;
    } else if (score >= 80) {
        cout << 'B' << endl;
    } else if (score >= 70) {
        cout << 'C' << endl;
    } else if (score >= 60) {
        cout << 'D' << endl;
    } else {
        cout << 'E' << endl;
    }
    
    system("pause");
    return 0;
}