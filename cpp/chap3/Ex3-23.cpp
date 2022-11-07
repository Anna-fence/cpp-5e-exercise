//
// Created by 韦澜 on 2022/11/5.
// 编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器把所有元素都变成原来的两倍
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> int_veq (12, 10);
    for(auto iter = int_veq.begin(); iter != int_veq.end(); iter++)
    {
        (*iter) = (*iter) * 10;
        cout << "Element: " << *iter;
    }
    return 0;
}