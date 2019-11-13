#include "iostream"
#include "fstream"
using namespace std;

/*
编写一个产生文本文件的程序。
*/

int main() {
    char *text = {"Hello World!"};
    ofstream file("./src/day21/HelloWorld.txt");
    if (file.fail()) {
        cout << "Failed to open file!" << endl;
    } else {
        cout << "File opened successfully!" << endl;
        file << text;
    }
    file.close();
    system("pause");
    return 0;
}