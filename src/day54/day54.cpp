#include "iostream"
using namespace std;

/*
写一函数，在一个数组中找出最大元素的位置
*/

int indexOfMax(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int arr[10] = {2, 4 ,346, 31234, 5, 7 ,346, 67, 56, 3656};
    cout << "The index of max value of arr is " << indexOfMax(arr, 10) << endl;
    system("pause");
    return 0;
}