#include <iostream>
int main(void) {
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c, ++d;
}