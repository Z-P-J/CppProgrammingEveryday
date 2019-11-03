#include "iostream"

using namespace std;

/*
编写一个程序，该程序建立一个动态数组，
为动态数组的元素赋值，显示动态数组的值并删除动态数组。
*/

int main() {
    int n;
    cout << "Please input the size of array:";
    cin >> n;
    double *arr = new double[n];

    for (int i = 0; i < n; i++) {
        double num;
        cout << "Input the value of array[" << i << "]:";
        cin >> num;
        *(arr + i) = num;
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "The value of array[" << i << "] is " << *(arr + i) << endl;
    }

    delete [] arr;

    system("pause");
    return 0;
}