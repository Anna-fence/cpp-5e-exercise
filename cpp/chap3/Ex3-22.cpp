//
// Created by 韦澜 on 2022/10/12.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> text{"I love Hu xiannian"};
    for(auto it = text.begin(); it != text.end(); ++it)
    {
        if(!it->empty())
        {
            for(auto &cha:(*it))
                cha = toupper(cha);
        }
        cout << (*it) <<endl;
    }

    return 0;
}