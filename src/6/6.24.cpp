// 描述下面这个函数的行为。如果代码中存在问题，请指出并改正。
#include <iostream>
using namespace std;
void print(const int ia[10]) {
    for (size_t i = 0; i != 10; ++i) cout << ia[i] << endl;
}
// 这样有误导性，并不会将数组限定为只能接受长度为10的数组，而是将其解释为指向常量整数的指针。
// const int* ia 所以依然可以传递任意长度的数组,可能导致数组越界，改为
void print(const int (&ia)[10]) {
    for (size_t i = 0; i != 10; ++i) {
        cout << ia[i] << endl;
    }
}
// 可以确保函数只接受特定长度的数组