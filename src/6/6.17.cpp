// 编写一个函数，判断string对象中是否含有大写字母。
// 编写另一个函数，把string对象全部改写成小写形式。在这两个函数中你使用的形参类型相同吗？为什么？
#include <iostream>
bool is_upper(const std::string& s) {
    for (auto c : s) {
        if (c >= 'A' && c <= 'Z') {
            return true;
        }
    }
    return false;
}
void to_upper(std::string& s) {
    for (auto& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
}
int main(void) {
    std::string s("abcd ABCD");
    std::cout << (is_upper(s) ? "is upper" : "is not upper") << "\n";
    to_upper(s);
    std::cout << s << "\n";
    return 0;
}