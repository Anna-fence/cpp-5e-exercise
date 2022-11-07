//
// Created by 韦澜 on 2022/10/10.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> intvec;
    int single_int = 0;
    while(cin >> single_int)
    {
        intvec.push_back(single_int);
    }
//    for (decltype(intvec.size()) idx_of_vec = 0; idx_of_vec < intvec.size()-1; idx_of_vec++)
//    {
//        cout << intvec[idx_of_vec] + intvec[idx_of_vec+1] << endl;
//    }
    decltype(intvec.size()) len_of_vec = intvec.size();
    for (decltype(intvec.size()) idx_of_vec = 0; idx_of_vec < len_of_vec-1; idx_of_vec++)
    {
        cout << intvec[idx_of_vec] + intvec[len_of_vec - 1 - idx_of_vec] << endl;
    }
    return 0;
}