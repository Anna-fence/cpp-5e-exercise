//
// Created by 韦澜 on 2022/11/15.
// 编写一段程序，使用条件运算符从vector<int>中找到哪些元素是奇数，然后将这些奇数值翻倍。
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ivec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (auto &num: ivec)
    {
        (num % 2 == 1) ? num *= 2 : num *= 1;
        cout << num << " ";
    }
    return 0;
}