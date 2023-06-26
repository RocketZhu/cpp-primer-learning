#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        if (s == "-1") break;
        for (auto& i : s) {
            i = toupper(i);
        }
        v.push_back(s);
    }
    for (auto str : v) {
        cout << str << endl;
    }
    return 0;
}