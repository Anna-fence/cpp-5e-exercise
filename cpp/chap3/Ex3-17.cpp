//
// Created by 韦澜 on 2022/10/10.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    string word;
    while(cin >> word)
    {
        for(auto &charac : word)
            charac = toupper(charac);
        svec.push_back(word);
    }
    for (auto each_word : svec)
    {
        cout << each_word << endl;
    }
    return 0;
}