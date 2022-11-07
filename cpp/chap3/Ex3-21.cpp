//
// Created by 韦澜 on 2022/10/12.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> v3(10, 42);
    for(auto i = v3.begin(); i != v3.end(); ++i)
    {
        cout << *i << endl;
    }
    return 0;
}