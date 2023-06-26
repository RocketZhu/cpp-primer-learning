#include<bits/stdc++.h>
int main(void) {
    const int N = 10;
    int a[N];
    srand((unsigned)time(nullptr));
    for (auto& i : a) {
        i = rand() % 100;
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::vector<int> v(std::begin(a), std::end(a));
    std::cout << "vector:" << "\n";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}