//
// Created by 韦澜 on 2022/10/10.
//编写一段程序，用cin读入一组整数，并把它们存入一个vector对象
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int read_int = 0;
    while (cin >> read_int)
    {
        ivec.push_back(read_int);
    }

    return 0;
}