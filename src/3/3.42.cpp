 #include<bits/stdc++.h>
 int main(void) {
    const int N = 10;
    std::vector <int> v;
    srand((unsigned)time(nullptr));
    std::cout << "vector:" << "\n";
    for (int i = 0; i < N; i++) {
        int p = rand() % 100;
        v.push_back(p);
        std::cout << p << " ";
    }
    std::cout << "\n";
    auto it = v.cbegin();
    int a[N];
    std::cout << "数组的内容：" << "\n";
    for (auto& i : a) {
        i = *it;
        std::cout << i << " ";
        it++;
    }
    std::cout << "\n";
    return 0;
 }