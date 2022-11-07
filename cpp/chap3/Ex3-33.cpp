//
// Created by 韦澜 on 2022/11/7.
// Ex3-31 vector版
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec_int (10, 0);
    vector<int> vec_int_copy (10 ,0);

    for(decltype(vec_int.size()) idx = 0; idx != vec_int.size(); idx++)
    {
        vec_int[idx] = idx;
        cout << vec_int[idx] << endl;
        vec_int_copy[idx] = vec_int[idx];
    }

    return 0;
}