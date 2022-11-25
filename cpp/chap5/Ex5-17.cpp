//
// Created by 韦澜 on 2022/11/23.
// 检查两个vector int是否有一个是另一个的前缀
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> ivec1 = {0, 1, 1, 2, 3, 5, 8, 10};
    vector<int> ivec2 = {0, 1, 1, 2, 3, 5, 8};
    bool is_prefix = true;
    unsigned len;
    if (ivec1.size() >= ivec2.size())
        len = ivec2.size();
    else
        len = ivec1.size();
    for (int idx = 0; idx != len; ++idx)
    {
        if (ivec1[idx] != ivec2[idx])
            is_prefix = false;
        else;
    }
    if (is_prefix && ivec1.size() >= ivec2.size())
        cout << "ivec2 is the prefix of ivec1" << endl;
    else if (is_prefix && ivec1.size() < ivec2.size())
        cout << "ivec1 is the prefix of ivec2" << endl;
    else
        cout << "There is no prefix!" << endl;
    return 0;
}
