#include "iostream"
using namespace std;

/*
写一个字符串拷贝函数
*/

void strcpy(char *p, const char *q) {
    while (*p++ = *q++);
}

int main() {
    char s[] = "1234";
    char cpy[20];
    strcpy(cpy, s);
    for (int i = 0; i < sizeof(s) / sizeof(char); i++) {
        cout << cpy[i];
    }
    cout << endl;
    system("pause");
    return 0;
}