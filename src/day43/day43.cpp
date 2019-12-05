#include "iostream"
#include "vector"
using namespace std;

/*
写一个函数，将一个整数的各位数字的按顺序打印出来
*/

void printNum(int num) {
    vector<int> v;
    while (num) {
        v.push_back(num % 10);
        num /= 10;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    printNum(12345);
    system("pause");
    return 0;
}