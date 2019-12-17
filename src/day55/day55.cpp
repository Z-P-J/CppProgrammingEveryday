#include "iostream"
using namespace std;

/*
找出一个二维数组中的鞍点，即该元素在该行上最大，在该列上最小。
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
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int count = 0;
    for (int i = 0; i < 3; i++) {
        // 先找出每行最大的位置，再考虑该位置的数是否在该列上最小
        int index = indexOfMax(arr[i], 3);
        int min = arr[i][index];
        for (int j = 0; j < 3 && j != i; j++) {
            if (arr[j][index] < min) {
                min = arr[j][index];
            }
        }
        if (min == arr[i][index]) {
            count++;
            cout << "(" << i << ", " << index << ")" << endl;
        }
    }
    if (count == 0) {
        cout << "have nothing!" << endl;
    }
    system("pause");
    return 0;
}