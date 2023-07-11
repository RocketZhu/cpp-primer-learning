// 参考本节介绍的几个print函数，根据理解编写你自己的版本。依次调用每个函数使其输入下面定义的j:
// int j[2] = {0, 1};
#include <iostream>
void print(const int (*arr)[2]) {
    for (auto i : *arr) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
void print(const int (&arr)[2]) {
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
void print(const int arr[], size_t sz) {
    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void print(const int* begin, const int* end) {
    for (auto i = begin; i != end; i++) {
        std::cout << *i << " ";
    }
    std::cout << "\n";
}
int main(void) {
    int j[2] = {0, 1};
    print(j);
    print(&j);
    print(j, std::end(j) - std::begin(j));
    print(std::begin(j), std::end(j));
    return 0;
}