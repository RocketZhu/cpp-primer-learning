#include <iostream>
int main() {
    const int buf;
    // const对象必须被初始化
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    ++sz;
    // sz是一个const 对象，其值不能改变
    return 0;
}