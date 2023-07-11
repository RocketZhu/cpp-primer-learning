// 编写一个函数，令其交换两个int指针。
#include <iostream>
void swap(int*& a, int*& b) {
    int* t = a;
    a = b;
    b = t;
}
int main(void) {
    int a = 0, b = 1;
    int *i = &a, *j = &b;
    std::cout << i << " " << j << "\n";
    swap(i, j);
    std::cout << i << " " << j << "\n";
    return 0;
}