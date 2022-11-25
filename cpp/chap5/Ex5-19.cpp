//
// Created by 韦澜 on 2022/11/24.
// 编写一段程序，使用do while循环重复地执行下述任务：首先提示用户输入两个string对象，然后挑那个较短的输出。
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1;
    string s2;
    do {
        cout << "input two strings: " << endl;
        cin >> s1;
        cin >> s2;
        s1.size() <= s2.size() ? cout << s1 << endl : cout << s2 << endl;
    }
    while (true);
    return 0;
}