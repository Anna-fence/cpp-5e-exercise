//
// Created by 韦澜 on 2022/11/23.
// 加入统计空格、换行符、制表符的语句
#include <iostream>
using namespace std;
int main(){
    char character;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tabCnt = 0, spaceCnt = 0, lineCnt = 0, otherCnt = 0;
    while(cin >> character)
    {
        switch (character)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case '\t':
                ++tabCnt;
            case '\n':
                ++lineCnt;
            case ' ':
                ++spaceCnt;
            default:
                otherCnt ++;
        }
    }
    cout << "aCnt: " << aCnt << endl;
    cout << "eCnt: " << eCnt << endl;
    cout << "iCnt: " << iCnt << endl;
    cout << "oCnt: " << oCnt << endl;
    cout << "uCnt: " << uCnt << endl;
    cout << "spaceCnt: " << spaceCnt << endl;
    cout << "tabCnt: " << tabCnt << endl;
    cout << "lineCnt: " << lineCnt << endl;
    cout << "otherCnt: " << otherCnt << endl;
    return 0;
}
