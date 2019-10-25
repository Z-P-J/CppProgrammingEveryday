#include "iostream"
#include "cstring"
using namespace std;

/*
将字符串中的全部小写字母转为大写，
将全部大写字母转为小写，其他字符不变
*/

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

// 返回新字符串
string exchangeUpperAndLower_1(string& str) {
    string newStr("");
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isUpper(c)) {
            newStr.append(1, c + 32);
        } else if (isLower(c)) {
            newStr.append(1, c - 32);
        } else {
            newStr.append(1, c);
        }
    }
    return newStr;
}

// 在原字符串上修改
void exchangeUpperAndLower_2(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (isUpper(str[i])) {
            str[i] += 32;
        } else if (isLower(str[i])) {
            str[i] -= 32;
        }
    }
}

// 返回一个新的char*字符串
char* exchangeUpperAndLower_3(char *str) {
    int len = strlen(str);
    char* s = new char[len + 1];
    for (int i = 0; i < len; i++) {
        if (isUpper(str[i])) {
            s[i] = str[i]+ 32;
        } else if (isLower(str[i])) {
            s[i] = str[i] - 32;
        } else {
            s[i] = str[i];
        }
    }
    // char*字符串结尾为\0
    s[len] = '\0';
    return s;
}

int main() {
    string str = "ddg&9fhHU IKJ!$5hjVDJ46etj   HJgfrej37465t8e#*%iurg*)@hjhHUfgiky94egr";
    char *str2 = "ddg&9fhHU IKJ!$5hjVDJ46etj   HJgfrej37465t8e#*%iurg*)@hjhHUfgiky94egr";
    cout << "original str is " << str << endl;
    cout << "new str is " << exchangeUpperAndLower_1(str) << endl;
    exchangeUpperAndLower_2(str);
    cout << "new str is " << str << endl;

    cout << "original str is " << str2 << endl;
    cout << "new str is " << exchangeUpperAndLower_3(str2) << endl;
    system("pause");
    return 0;
}