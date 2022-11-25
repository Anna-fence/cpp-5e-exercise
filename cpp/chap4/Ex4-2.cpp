//
// Created by 韦澜 on 2022/11/14.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ivec = {0, 2, 3, 4, 4, 5, 6};
    cout << "*ivec.begin() + 1 is " << (*(ivec.begin())) + 1;
    return 0;
}