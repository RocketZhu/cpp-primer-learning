#include <iostream>
int& get(int* arr, int idx) { return arr[idx]; }
int main(void) {
    int a[10] = {};
    for (int i = 0; i < 10; i++) {
        get(a, i) = i;
    }
    for (auto i : a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}