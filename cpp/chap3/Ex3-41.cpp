//
// Created by 韦澜 on 2022/11/14.
// 3.41: 编写一段程序，用整型数组初始化一个vector对象
// 3.42: 编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组
#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;
int main(){
//    3.41:
//    int ia[] = {0, 2, 3, 4, 1};
//    vector<int> ivec(begin(ia), end(ia));
//    for (auto mem:ivec)
//        cout << mem << endl;
//    return 0;
//    3.42:
    vector<int> ivec (10, 2);
    const int len = ivec.size();
    int ia[len];
    int cnt = 0;
    for (auto iter = ivec.begin(); iter != ivec.end(); iter++)
    {
        ia[cnt] = (*iter);
        cout << ia[cnt] << " ";
        ++cnt;
    }
    return 0;
}
