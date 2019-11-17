#include "iostream"
#include "fstream"
using namespace std;

/*
从键盘输入一个字符串，将其中的大写字母全部转换成小写字母，
然后存入到文件名为 “text ”的磁盘文件中保存。输入的字符串以 “$ ”结束。
*/

int main() {
    ofstream file("./src/day25/text.txt", ios::app);
    if (file.fail()) {
        cout << "File open failed!" << endl;
    } else {
        char c;
        while (true) {
            cin >> c;
            if (c == '$') {
                break;
            } else {
                if (c >= 'A' && c <= 'Z') {
                    c += 32;
                }
                file << c;
            }
        }
        file.flush();
        file.close();
        cout << "Finished!" << endl;
    }
    system("pause");
    return 0;
}