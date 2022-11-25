//
// Created by 韦澜 on 2022/11/23.
// 统计ff fl fi的数量
#include <iostream>
#include <string>
#include <iterator>
using namespace std;
int main(){
    int ffCnt = 0, fiCnt = 0, flCnt = 0;
    string s = "sadwahskjffksadfiasadffasdflagsuxyafihao";
    for (auto iter = s.begin(); iter != (s.end() - 1); ++iter)
    {
//        string tmp = string(1, (*iter)) + string(1, (*(iter + 1)));
        if ((*iter) == 'f')
        {
            switch(*(iter + 1))
            {
                case 'f':
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
                default:
                    ;
            }
        }
        else
            ;
    }
    cout << "ff: " << ffCnt << endl;
    cout << "fi: " << fiCnt << endl;
    cout << "fl: " << flCnt << endl;
    return 0;
}
