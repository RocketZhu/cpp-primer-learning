#include <iostream>

bool is_empty(std::string &s) { return s.empty(); }
// 虽然合法，但是形参改成 const std::string &s
// 更好，这样就可以传入char[]这样的字符串字面值了
bool is_empty(const std::string &s) { return s.empty(); }
int main(void) {
    std::cout << is_empty("dfs") << "\n";
    return 0;
}