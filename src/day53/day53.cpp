#include "iostream"
using namespace std;

/*
写一函数，将一数组中的元素反转。
*/

void reverse(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(a + i);
        *(a + i) = *(a + n -i - 1);
        *(a + n - i - 1) = temp;
    }
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    reverse(a, 10);
    
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}