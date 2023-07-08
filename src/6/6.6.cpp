#include <iostream>
int fun(int n) {
    static int ctr = 0;
    ctr += n;
    return ctr;
}
int main(void) {
    for (int i = 1; i <= 10; i++) {
        std::cout << fun(i) << ' ';
    }
    std::cout << "\n";
    return 0;
}