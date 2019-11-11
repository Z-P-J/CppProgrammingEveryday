#include "iostream"
#include "vector"
#include "algorithm"
#include "iterator"
using namespace std;

/*
已知有一个整型数组 a ，其内容为 1 3 5 7 9 2 4 6 8 10. 
先对数组进行升序排列，再使用它产生向量 b ，
然后再在向量的尾部追加 11 ，并按降序排列输出向量的内容和 capacity() 的内容。
*/

/*
注：
标准程序库定义有供输入及输出用的iostream iterator类，
称为istream_iterator和ostream_iterator，分别支持单一型别的元素读取和写入。

提供了输入操作符（>>）和 输出操作符 (<<)的任何类型都
可以创建 istream_iterator 对象和ostream_iteratorcfq对象,
即对自己的类重载了这两个函数:
*/

int main() {
    int nums[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int length = sizeof(nums) / sizeof(int);
    
    // for (int i = 0; i < length; i++) {
    //     for (int j = i + 1; j < length; j++) {
    //         if (nums[j] < nums[i]) {
    //             int temp = nums[j];
    //             nums[j] = nums[i];
    //             nums[i] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < length; i++) {
    //     cout << nums[i] << ", ";
    // }

    sort(nums, nums + length);
    /*
    ostream_iterator第二个参数可以是C-Sty1e字符串，也可以是字符串常量。
    它用来表示各个元素被输出时的分隔符，默认情形下输出的各个元素并无任何分隔符。
    */
    copy(nums, nums + length, ostream_iterator<int>(cout, " "));
    cout << endl;
    vector<int> v(nums, nums + length);
    v.push_back(11);
    reverse_copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << "\ncapacity = " << v.capacity() << endl;
    system("pause");
    return 0;
}