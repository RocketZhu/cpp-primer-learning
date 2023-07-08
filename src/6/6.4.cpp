#include <iostream>
int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int main(void) {
    int n;
    std::cin >> n;
    std::cout << fact(n) << "\n";
    return 0;
}