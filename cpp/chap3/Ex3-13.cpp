//
// Created by 韦澜 on 2022/10/10.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;  //空
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    for(auto i : v7)
    {
        cout << i << endl;
    }


    return 0;
}