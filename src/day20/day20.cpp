#include "iostream"
#include "Student.cpp"
using namespace std;

/*
利用流格式控制，进行成绩和名字的输出，要求名字左对齐，分数右对齐。
*/

int main() {
    Student student1("sdghf", 12);
    Student student2("jd", 99);
    Student student3("wer4sgjdkf", 2);
    Student student4("sdfjrkn", 124);
    cout.width(20);
    cout << left << "name" << right << "score" << endl;
    cout.width(20);
    cout << left << student1.GetName() << right << student1.GetScore() << endl;
    cout.width(20);
    cout << left << student2.GetName() << right << student2.GetScore() << endl;
    cout.width(20);
    cout << left << student3.GetName() << right << student3.GetScore() << endl;
    cout.width(20);
    cout << left << student4.GetName() << right << student4.GetScore() << endl;
    system("pause");
    return 0;
}