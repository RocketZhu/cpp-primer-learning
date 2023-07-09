#include <iostream>
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int main(void) {
    int a = 4, b = 3;
    swap(a, b);
    std::cout << a << " " << b << "\n";
    return 0;
}
// 引用更加容易使用，避免繁琐的指针操作，使用引用避免拷贝