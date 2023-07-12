#include <iostream>
#include <vector>
void print(int pos, std::vector<int>& v) {
    if (pos == v.size()) {
        return;
    }
    std::cout << v[pos] << " ";
    print(pos + 1, v);
}
int main(void) {
    std::vector<int> v{1, 2, 3, 4, 5, 6};
    print(0, v);
    std::cout << std::endl;
    return 0;
}