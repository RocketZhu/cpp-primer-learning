#include <iostream>
int main() {
    int i = 2;
    double d = 3.24;
    i *= static_cast<int>(d);
    std::cout << i << std::endl;
    return 0;
}
