//
// Created by 韦澜 on 2022/11/5.
// 划分分数段
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> scores = {40, 60, 90, 85, 56, 42, 12, 9, 88, 99, 100, 98};
    vector<int> grades(11, 0);
    int idx = 0;
    for(auto iter = scores.begin(); iter!=scores.end(); iter++)
    {
        idx = int((*iter) / 10);
        grades[idx]++;
    }
    for(auto grade:grades)
        cout << grade << endl;
    return 0;
}