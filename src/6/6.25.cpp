// 编写一个main函数，令其接受两个实参。把实参的内容连接成一个string对象并输出出来。

#include <iostream>
int main(int argc, char** argv) {
    std::string str;
    for (int i = 1; i < argc; i++) {
        str += argv[i];
    }
    std::cout << str << "\n";
    return 0;
}