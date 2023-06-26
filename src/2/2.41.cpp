#include "Sales_data.h"
#include <iostream>
int main(void) {
    Sales_data book;
    std::cout << "请输入销售记录：" << std::endl;
    // 输入格式：ISBN 售出本数 原始价格 实际售价
    while (std::cin >> book) {
        std::cout << "ISBN、售出本数、原始价格、实售价格、折扣为：" << book
                  << std::endl;
    }
}
