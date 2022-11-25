//
// Created by 韦澜 on 2022/11/25.
// 从标准输入中读取string对象的序列直到出现两个相同的单词或者所有单词都读完为止。(必须以大写字母开头)
// 输出连续出现的重复的单词/没有任何重复的消息
#include <string>
#include <iostream>
using namespace std;
int main(){
    string current_word;
    string last_word;
    while (cin >> current_word)
    {
        if (current_word == last_word && (current_word[0] >= 65 && current_word[0] <= 90)) {
            cout << current_word << " is repeated " << endl;
            break;
        }
        else
        {
            last_word = current_word;
            continue;
        }

    }
    if (current_word != last_word)
        cout << "No word is repeated" << endl;
    return 0;
}
