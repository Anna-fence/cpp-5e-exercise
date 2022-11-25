//
// Created by 韦澜 on 2022/11/15.
//
// > 90: high pass
// 75 < grade < 90: low pass
// 60 < grade < 75: pass
// < 60: fail
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int grade;
    while (cin >> grade)
    {
//        part1:
//        if (grade >= 0 && grade <= 100)
//            cout << ((grade >= 90) ? "high pass" : (grade >= 75) ? "low pass" : (grade >= 60) ? "pass" : "fail");
//        part2:
        if (grade >= 0 && grade <= 100)
        {
            if (grade >= 90)
                cout << "high pass" << endl;
            else if (grade >= 75)
                cout << "low pass" << endl;
            else if (grade >= 60)
                cout << "pass" << endl;
            else
                cout << "fail" << endl;
        }
    }
    return 0;
}
