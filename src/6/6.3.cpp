#include <iostream>
int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int main(void) {
    std::cout << fact(5) << "\n";
    return 0;
}