#include "iostream"

#define length(arr) {sizeof(arr) / sizeof(arr[0])}
using namespace std;

/*
重载上题中的函数模板，使他能够进行两个数组的求和
*/

template<typename T>
T sum(const T *arr, const int len) {
    T total = 0;
    for (int i = 0; i < len; i++) {
        total += arr[i];
    }
    return total;
}

template<typename T>
T sum(const T *arr1, const int len1, const T *arr2, const int len2) {
    return sum(arr1, len1) + sum(arr2, len2);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4, 7, 8};
    cout << "Total is " << sum(arr1, length(arr1), arr2, length(arr2)) << endl;
    system("pause");
    return 0;
}