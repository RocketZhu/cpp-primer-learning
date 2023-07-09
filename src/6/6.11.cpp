#include <iostream>
void reset(int& i) { i = 0; }
int main(void) {
    int j = 100;
    reset(j);
    std::cout << j << "\n";
    return 0;
}