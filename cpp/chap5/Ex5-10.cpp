//
// Created by 韦澜 on 2022/11/22.
// 加入大写
#include <iostream>
#include <string>
using namespace std;
int main(){
    char character;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    while(cin >> character)
    {
        switch (character)
        {
            case 'a':
//                ++aCnt;
//                break;
            case 'A':
                ++aCnt;
                break;
            case 'e':
//                ++eCnt;
//                break;
            case 'E':
                ++eCnt;
                break;
            case 'i':
//                ++iCnt;
//                break;
            case 'I':
                ++iCnt;
                break;
            case 'o':
//                ++oCnt;
//                break;
            case 'O':
                ++oCnt;
                break;
            case 'u':
//                ++uCnt;
//                break;
            case 'U':
                ++uCnt;
                break;
            default:
                otherCnt ++;
        }
    }
    cout << endl;
    cout << "aCnt: " << aCnt << endl;
    cout << "eCnt: " << eCnt << endl;
    cout << "iCnt: " << iCnt << endl;
    cout << "oCnt: " << oCnt << endl;
    cout << "uCnt: " << uCnt << endl;
    cout << "otherCnt: " << otherCnt << endl;
    return 0;
}
