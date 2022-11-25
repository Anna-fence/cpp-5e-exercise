//
// Created by 韦澜 on 2022/11/22.
// 编写一段程序，使用一系列if语句统计从cin读入的文本中有多少元音字母

#include <iostream>
#include <string>
using namespace std;
int main(){
    char character;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while(cin >> character)
    {
        if (character != 'z')
        {
            if (character == 'a')
                ++aCnt;
            else if (character == 'e')
                ++eCnt;
            else if (character == 'i')
                ++iCnt;
            else if (character == 'o')
                ++oCnt;
            else
                ++uCnt;
        }
        else
            break;
    }
    cout << "aCnt: " << aCnt << endl;
    cout << "eCnt: " << eCnt << endl;
    cout << "iCnt: " << iCnt << endl;
    cout << "oCnt: " << oCnt << endl;
    cout << "uCnt: " << uCnt << endl;
    return 0;
}
