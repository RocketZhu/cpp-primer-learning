#include <iostream>
int main(void) {
    int i, j;
    std::cin >> i >> j;
    double slope = static_cast<double>(j / i);
    std::cout << slope << std::endl;
    // 把 j / i 的值强制类型转换成 double，然后赋值给 slope。请注意，如果 i 和 j
    // 的类型都是 int，则 j / i 的求值结果仍然是int
    // 即使除不尽也只保留商的整数部分（向零取整），最后再转换成 double 类型

    return 0;
}