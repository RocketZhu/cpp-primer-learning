#include <iostream>
int fun() {
    static int ctr = 0;
    return ctr++;
}
int main(void) {
    for (int i = 0; i < 10; i++) {
        std::cout << fun() << " ";
    }
    std::cout << "\n";
    return 0;
}