#include<bits/stdc++.h>
int main(void) {
    std::vector<int> vec(10, 1);
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        *it *= 2;
    }
    std::for_each(vec.begin(), vec.end(), [&](auto a){
        std::cout << a << ' ';
    });
    puts("");
    auto dis = vec.end() - vec.begin();
    std::cout << dis << "\n";
    return 0;
}