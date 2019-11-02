#include "iostream"
#include "Complex.cpp"
using namespace std;

/*
声明复数的类， complex ，使用友元函数 add 实现复数加法。
*/

int main() {
    Complex complex1(-6.7, -4);
    Complex complex2(3.2, 9.1);
    Complex complexAdd = Add(complex1, complex2);
    complex1.PrintComplex();
    complex2.PrintComplex();
    complexAdd.PrintComplex();
    system("pause");
    return 0;
}