//
// Created by 韦澜 on 2022/11/7.
//
#include <string>
#include <iostream>
using namespace std;
string sa[10];
int ia[10];
int main(){
    string sa2[10];
    int ia2[10];
    for(auto sa_string:sa)
        cout << "sa:" << sa_string << endl;
    for(auto ia_num:ia)
        cout << "ia:" << ia_num << endl;
    for(auto sa2_string:sa2)
        cout << "sa2:" << sa2_string << endl;
    for(auto ia2_num:ia2)
        cout << "ia2:" << ia2_num << endl;
    return 0;
}