//
// Created by 韦澜 on 2022/11/5.
// 读入一组整数并把它们存入一个vector对象，将每对相邻整数和输出出来；
// 输出第一个和最后一个、第二个和倒数第二个
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {0, 2, 3, 8, 9};
    auto begin = nums.begin();
    auto end = nums.end();
    auto mid = (nums.end() - nums.begin()) / 2 + nums.begin();
    //先输出看看原来的vector
    for(auto num:nums)
        cout << num << " ";
    cout << endl;
    for(auto iter=begin; iter != end; iter++)
    {
        cout << "The sum of " << (*iter) << " and " << *(iter + 1) << " is " << (*iter) + *(iter + 1) << endl;
    }
    //And the second part of the solution is:
    for(auto it=begin; it<=mid; it++)
    {
        decltype(end - begin) distance = it - begin;
        cout << "The sum of " << (*it) << " and " << *(end - distance - 1) << " is " << (*it) + *(end - distance - 1) << endl;
    }
    return 0;
};