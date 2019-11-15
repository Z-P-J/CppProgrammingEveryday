#include "iostream"
#include "fstream"
#include "vector"
#include "Triangle.cpp"
using namespace std;

/*
改写上题的程序，使程序反复计算，直到输入结束符号为止。
要求在停止计算后，询问要保存的文件名，然后将结果一次写入制定文件中。
*/

int main() {
    vector<Triangle> v;
    while (true) {
        cout << "operation:(exit: -1, input: 1)" << endl;
        int operation;
        cin >> operation;
        if (operation == -1) {
            if (v.empty()) {
                cout << "Exit!" << endl;
            } else {
                string name;
                cout << "Please input the name of saved file:";
                cin >> name;
                ofstream file;
                string path("./src/day23/");
                file.open(path.append(name), ios::app);
                if (file.fail()) {
                    cout << "The file open failed! Exit!" << endl;
                } else {
                    for (Triangle t : v) {
                        t.Output(&file);
                    }
                    cout << "File aved successfully! Exit!" << endl;
                }
            }
            break;
        } else if (operation == 1) {
            cout << "Please input the length of the three sides of a triangle: " << endl;
            double a, b, c;
            cin >> a >> b >> c;
            if (a > 0 
                && b > 0 
                && c > 0 
                && a + b > c 
                && b + c > a 
                && a + c > b) {
                // double p = (a + b + c) / 2;
                // double s = sqrt(p * (p - a) * (p - b) * (p - c));
                // cout << "The s of the triangle is " << s << endl;
                // ofstream file;
                // file.open("./src/day22/triangles.txt", ios::app);
                // if (file.fail()) {
                //     cout << "The file open failed!" << endl;
                // } else {
                //     file << "a = " << a << ", b = " << b << ", c = " << c << ";    S = " << s << endl;
                // }
                Triangle triangle(a, b, c);
                v.push_back(triangle);
            } else {
                cout << "The length of the three sides what you input is valid!" << endl;
            }
        } else {
            cout << "Input error!" << endl;
        }
        
    }

    
    system("pause");
    return 0;
}