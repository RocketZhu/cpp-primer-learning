#include <iostream>
int main(void) {
    int a, b;
    std::cin >> a >> b;
    if (b) {
        std::cout << "the division ans = " << (double)a / b << "\n";
    } else {
        throw std::runtime_error("the second num shouldn't be 0");
    }

    return 0;
}