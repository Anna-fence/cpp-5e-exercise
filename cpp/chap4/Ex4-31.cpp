//
// Created by 韦澜 on 2022/11/16.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ivec (10, 52);
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    {
        ivec[ix] = cnt;
    }
    for (auto num : ivec)
        cout << num << " ";
    return 0;
}