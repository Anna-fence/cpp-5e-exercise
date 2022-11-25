//
// Created by 韦澜 on 2022/11/16.
//
#include <iostream>
using namespace std;
int main(){
    int x[10] = {0};
    int *p = x;
    cout << *p << endl;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(*p)/sizeof(p) << endl;

    return 0;
}