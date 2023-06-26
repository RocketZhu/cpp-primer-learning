#include <bits/stdc++.h>
int main(void) {
    int a[] = {3, 34, 5, 6, 2};
    auto p1 = std::begin(a);
    auto p2 = std::end(a);
    while (p1 != p2) {
        *p1 = 0;
        ++p1;
    }
    for (auto i : a) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}
