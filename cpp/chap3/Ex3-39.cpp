//
// Created by 韦澜 on 2022/11/11.
//
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *p = ca;
    while(*p)
    {
        cout << *p << endl;
        ++p;
    }
    return 0;
}