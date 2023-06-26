#include <bits/stdc++.h>
int main(void) {
    char a[] = "Welcome to ";
    char b[] = "C++ family!";
    char c[std::size(a) + std::size(b) - 1];
    strcpy(c, a);
    strcat(c, b);
    std::cout << c << std::endl;    
    return 0;
}