#include <iostream>
int abs(int n) { return n > 0 ? n : -n; }
int main(void) {
    int n;
    std::cin >> n;
    std::cout << abs(n) << "\n";
    return 0;
}