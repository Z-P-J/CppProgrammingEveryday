#include "iostream"
#include "Dog.cpp"
using namespace std;

/*
定义一个 Dog 类，它用静态数据成员 Dogs记录 Dog 的个体数目，
静态成员函数 GetDogs 用来存取 Dogs 。设计并测试这个类。
*/

int main() {
    Dog dog1("hh", 2);
    Dog dog2("n", 3);
    dog1.AddDogs(3);
    dog2.AddDogs(4);
    cout << Dog::GetDogs() << endl;
    system("pause");
    return 0;
}