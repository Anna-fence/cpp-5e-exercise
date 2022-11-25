//
// Created by 韦澜 on 2022/11/11.
// 编写一段程序，利用指针将数组中的元素置为0
//
#include <iostream>
#include <cstddef>
using namespace std;
int main(){
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia_end = end(ia);
    for (auto ia_ptr = begin(ia); ia_ptr != ia_end; ++ia_ptr)
    {
        *ia_ptr = 0;
        cout << *(ia_ptr) << endl;
    }
    return 0;
}