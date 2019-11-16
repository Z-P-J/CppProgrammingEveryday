#include "iostream"
#include "fstream"
using namespace std;

/*
从文件 TEST 中读出字符并写入 TEST1 里，要求均附加错误检查。
*/

int main() {
    ifstream test("./src/day24/TEST.txt");
    ofstream test1("./src/day24/TEST1.txt", ios::app);
    if (!test || test.fail()) {
        cout << "TEST.txt open failed!" << endl;
    } else {
        if (!test1 || test1.fail()) {
            cout << "TEST1.txt open failed!" << endl;
        } else {
            char c;
            while (true) {
                test >> c;
                if (test.eof()) {
                    test.close();
                    // 注意调用flush函数将缓冲区数据写入文件，否则可能会导致文件TEST1.txt中无结果
                    test1.flush();
                    test1.close();
                    cout << "finished!" << endl;
                    break;
                }
                cout << c;
                test1 << c;
            }
        }
    }
    system("pause");
    return 0;
}