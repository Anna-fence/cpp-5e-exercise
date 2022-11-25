//
// Created by 韦澜 on 2022/11/23.
//
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s = "how now now now brown cow cow";
    vector<string> separated_string;
    string current_word;
    int max_cnt = 0;
    int current_cnt = 0;
    string each_word; //用一个空字符串存放当前单词
    for (auto const cha : s )
    {
        if (cha != ' ')
            each_word += cha;
        else
        {
            separated_string.push_back(each_word);
            each_word = "";
        }
    }
    for (auto &word : separated_string)
        cout << "The separated words is " << word << endl;
    for (auto const &word : separated_string)
    {
        if (current_cnt == 0) //第一次出现，但是也是出现了
            ++ current_cnt;
        else;
        if (word == current_word)
            ++current_cnt;
        else
        {
            if (current_cnt > max_cnt)
                max_cnt = current_cnt;
            else;
            current_cnt = 0;
        }
        current_word = word;
    }
    cout << "The maximum time of appearance of the words is " << max_cnt << endl;
    return 0;
}