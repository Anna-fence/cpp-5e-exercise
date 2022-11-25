//
// Created by 韦澜 on 2022/11/14.
//
#include <iostream>
using namespace std;
int main(){
    int num;
    while (cin >> num)
    {
        if (num == 42)
        {
            cout << "break" << endl;
            break;
        }
    }
    return 0;
}