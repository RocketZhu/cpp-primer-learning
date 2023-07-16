#include <initializer_list>
#include <iostream>
int sum(std::initializer_list<int> l) {
    int res = 0;
    for (auto i : l) {
        res += i;
    }
    return res;
}
int main(void) {
    std::cout << sum({1, 2, 3, 4, 5}) << "\n";
    return 0;
}