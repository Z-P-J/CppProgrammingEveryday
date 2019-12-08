#include "iostream"
using namespace std;

/*
写一函数，判断某年是否是闰年
*/

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    cout << "Please enter a year:";
    int year;
    cin >> year;
    cout << year;
    cout << (isLeapYear(year) ? "is a leap year." : "is not a leap year") << endl;
    system("pause");
    return 0;
}