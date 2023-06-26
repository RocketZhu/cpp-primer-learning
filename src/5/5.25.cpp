#include <iostream>
int main(void) {
    int a, b;
    while (true) {
        std::cout << "please input 2 numbers\n";
        std::cin >> a >> b;
        try {
            if (b == 0) {
                throw std::runtime_error("the second num shouldn't be 0");
            }
            std::cout << "the division ans = " << (double)a / b << "\n";
        } catch (std::runtime_error& err) {
            std::cerr << err.what() << "\n";
            std::cout << "Continue? (y or n)";
            char ch;
            std::cin >> ch;
            if (!std::cin || ch == 'n') {
                break;
            }
        }
    }

    return 0;
}