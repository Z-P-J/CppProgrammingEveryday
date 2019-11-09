#include "iostream"
#include "Rectangle.cpp"
#include "Square.cpp"
using namespace std;

/*
使用类模板演示赋值兼容规则。

赋值兼容规则是指在需要父类对象的地方可以使用子类对象来代替:
  通过public继承，子类得到了父类除构造/析构函数之外的所有成员，且所有成员的访问属性和父类的完全相同。
  这样，public继承的子类实际就具备了父类的所有功能，凡是父类能解决的问题，子类都可以解决。
  赋值兼容规则是发生在父类和子类之间的:
  (1) 子类的对象可以赋值给父类对象对象，过程会发生隐式类型转换
  (2) 父类类型的指针可以指向子类对象
  (3) 父类类型的引用可以用子类对象初始化
  发生赋值兼容后，子类对象只能被作为父类对象使用，即只能使用从父类继承而来的成员。
————————————————
版权声明：本文为CSDN博主「mybright_」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_29344757/article/details/78504595
*/

int main() {
    // 基类对象
    Rectangle<double> rectangle1(1.1, 2.5);
    rectangle1.Print();
    // 子类对象
    Square<double> square1(4.2);
    square1.Print();
    // 子类对象初始化基类的引用
    Rectangle<double> &rectangle2 = square1;
    // 实际调用的是基类的Print函数
    rectangle2.Print();
    // 子类对象的地址赋给指向基类的指针
    Rectangle<double>* rectangle3 = &square1;
    // 实际调用的是基类的Print函数
    rectangle3->Print();
    // 子类指针
    Square<double>* square2 = &square1;
    // 调用子类的Print函数
    square2->Print();
    // 子类对象的属性值更新基类对象的属性值
    rectangle1 = square1;
    // 调用基类的Print函数
    rectangle1.Print();
    system("pause");
    return 0;
}