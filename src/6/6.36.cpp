// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象。
// 为上一题的函数再写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用decltype关键字。你觉得哪种形式最好?为什么?

#include <iostream>

std::string (&fun())[10];

typedef std::string arr[10];
arr& fun();

auto fun() -> std::string (&)[10];

std::string str[10];
decltype(str)& fun();
