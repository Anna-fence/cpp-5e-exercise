//
// Created by 韦澜 on 2022/11/18.
// 写一段自己的程序，使用if else语句实现把数字成绩转换成字母成绩的要求
// Ex5-6: 用条件运算符

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    char grade;
    vector<char> english_grade {'F', 'D', 'C', 'B', 'A'};
    vector<int> num_grade {58, 61, 42, 100, 86, 45, 99, 73};
//    for (auto num : num_grade)
//    {
//        if (num < 60)
//            grade = english_grade[0];
//        if (num == 100)
//            grade = english_grade[4];
//        else
//            grade = english_grade[(num - 50) / 10];
//        cout << "grade is " << grade << endl;
//    }
    for (auto num : num_grade)
    {
        num < 60 ? grade = english_grade[0] : num == 100 ? grade = english_grade[4] : grade = english_grade[(num - 50) / 10];
        cout << "grade is " << grade << endl;
    }
    decltype(num_grade.size()) size = 0;
    return 0;
}
