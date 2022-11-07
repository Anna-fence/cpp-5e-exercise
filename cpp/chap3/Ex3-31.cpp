//
// Created by 韦澜 on 2022/11/7.
// 编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其下标值
// 将创建的数组赋值给另一个数组
//
#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int array[10];
    for(size_t idx = 0; idx != 10; idx++)
    {
        array[idx] = idx;
    }
//    for (auto array_mem : array)
//        cout << array_mem << endl;
    // part2:

    int array_copy[10];
    for(size_t idx_copy = 0; idx_copy != 10; idx_copy++)
    {
        array_copy[idx_copy] = array[idx_copy];
        cout << array_copy[idx_copy] << endl;
    }
    return 0;
}