#include "iostream"

#define length(arr) {sizeof(arr) / sizeof(arr[0])}

using namespace std;

/*
利用函数模板设计一个求数组元素中和的函数
*/

/*
注意！！！！！！
在主函数中求长度和在子函数中求长度的结果不一样！！！！！
原因是C++在参数的传递中传递数组时只会传递数组首地址
*/
template<typename T>
T sum(const T *arr, const int len) {
    T total = 0;
    // 下面这句求出的数组长度有问题，详情见上面的注意。
    // int len = sizeof(*arr) / sizeof(arr[0]);
    // cout << "len=" << len << endl;
    for (int i = 0; i < len; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    double arr2[] = {2.1, 3.6, 6.2, 0.5};
    cout << "The sum of arr1 is " << sum(arr1, length(arr1)) << endl;
    cout << "The sum of arr2 is " << sum(arr2, length(arr2)) << endl;
    system("pause");
    return 0;
}