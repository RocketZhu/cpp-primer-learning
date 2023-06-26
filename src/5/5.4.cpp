#include <bits/stdc++.h>
int main(void) {
    std::string s;
    // while(std::string::iterator it != s.end()) {} 错误没有初始化
    std::string::iterator it = s.begin();
    while (it != s.end()) {
        ++it;
    }

    // while (bool status = find(word)) {
    //     if (!status) {
    //     }
    // }
    
    bool status = false;
    std::string word;
    while (status = s.find(word)) {
        if (!status) {}
    }

    return 0;
}