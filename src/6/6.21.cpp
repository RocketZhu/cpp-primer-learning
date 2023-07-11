// 编写一个函数，令其接受两个参数：一个是int型的数，另一个是int指针。
// 函数比较int的值和指针所指的值，返回较大的那个。在该函数中指针的类型应该是什么？
#include <iostream>
int cmp(int a, int* p) { return std::max(a, *p); }
int main(void) {
    int a = 2, b = 3;
    std::cout << cmp(a, &b) << "\n";
    return 0;
}
