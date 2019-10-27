#include "iostream"

using namespace std;

/*
编写一个字符串长度的函数strlen()，
再用strlen()函数编写一个函数revers()，
使字符串逆序。
*/

int strlen(char* s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

void revers(char* s) {
    int len = strlen(s);
    int i = len / 2 - 1;
    while (i >= 0) {
        char c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i--;
    }
    s[len] = '\0';
}

int main() {
    // char* s存储只读区域的地址，所以这样写revers时会报错。
    // char* s = "s,fgh35874udgfdhe545df";

    char s[] = {"s,fgh35874udgfdhe545df"};
    cout << "origin of s = " << s << endl;
    cout << "length of s = " << strlen(s) << endl;
    revers(s);
    cout << "revers of s = " << s << endl;
    system("pause");
    return 0;
}