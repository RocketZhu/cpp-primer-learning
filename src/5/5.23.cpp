#include <iostream>
int main(void) {
    int a, b;
    std::cin >> a >> b;
    if (b) {
        std::cout << "the division ans =  " << (double)a / b << "\n";
    } else {
        std::cerr << "the second num can't be 0\n";
        return -1;
    }

    return 0;
}