#include <bits/stdc++.h>
int main(void) {
    std::string s, pres, maxs;
    int maxcnt = INT_MIN;
    int cnt = 1;
    while (std::cin >> s) {
        if (s == pres)
            cnt++;
        else {
            if (cnt > maxcnt) {
                maxcnt = cnt;
                maxs = pres;
                cnt = 1;
            }
            pres = s;
        }
    }
    std::cout << maxs << ' ' << maxcnt << "\n";
}
