#include <iostream>
#include "Sales_item.h"

int main()
{
    // 从键盘输入一个销售记录，并且将它标准输出
    // Sales_item item1;
    // std::cin >> item1;
    // std::cout << item1;
    // 相加两个相同的销售记录
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
