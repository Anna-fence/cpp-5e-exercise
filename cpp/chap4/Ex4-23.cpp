//
// Created by 韦澜 on 2022/11/15.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "word";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout << p1 << endl;
    return 0;
}