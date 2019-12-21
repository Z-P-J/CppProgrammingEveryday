#include "iostream"
using namespace std;

/*
写一个字符串连接函数
*/

char* strcat(char *str1, char *str2) {
    char *p = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        // cout << *str2 << endl;
        *str1++ = *str2++;
        // cout << *str2 << endl;
    }
    
    while (*str1++ = *str2++);
    // *str1 = '\0';
    return p;
}

int main() {
    char s1[] = "1234";
    char s2[] = "6789";
    char *s = strcat(s1, s2);
    for (int i = 0; i < sizeof(s) / sizeof(char); i++) {
        cout << s[i];
    }
    cout << endl;
    system("pause");
    return 0;
}