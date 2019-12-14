#include "iostream"
using namespace std;

/*
写一个程序，进行体操评分，依次输入10名评委所评分数，
去除一个最高分和一个最低分，再算出平均分作为选手的得分。
*/

int main() {
    int i;
    int total = 0;
    int max, min;
    int x;
    for (i = 0; i < 10; i++) {
        cin >> x;
        if (i == 0) {
            max = x;
            min = x;
        } else {
            if (x > max) {
                max = x;
            }
            if (x < min) {
                min = x;
            }
        }
        total += x;
    }
    cout << "avg = " << (total - max - min) / (double) 8 << endl;
    system("pause");
    return 0;
}