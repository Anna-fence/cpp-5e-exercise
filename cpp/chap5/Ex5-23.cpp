//
// Created by 韦澜 on 2022/11/25.
// 编写一段程序，从标准输入读取两个整数，输出第一个数除以第二个数的结果
// Ex5-24 抛出异常
// Ex5-25 处理异常
#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
    int num1, num2;
    cout << "Input two integers: " << endl;
//    cin >> num1 >> num2;
//    if (num2 == 0)
//        throw runtime_error("The dividend is zero!");
//    cout << "The result of num1 / num2 is " << double(num1) / num2 << endl; // 注意不要损失精度
//    const char err[] = "The dividend is zero!";
    while (cin >> num1 >> num2)
    {
        try {
            if (num2 == 0)
                throw runtime_error ("The dividend is zero!");
            cout << "The result of " << num1 << " / " << num2 << " is " << double(num1) / num2 << endl;
        } catch (runtime_error &err) {  // Throw by value, catch by reference
            cout << err.what() << endl;
            cout << "\nTry again? Enter y or n: " << endl;
            char yes_or_no;
            cin >> yes_or_no;
            if (!yes_or_no || yes_or_no == 'n')
                break;
        }
    }
    return 0;
}