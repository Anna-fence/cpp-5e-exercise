#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
/*
编写一段程序从标准输入中读入多个字符串并将它们连接在一起，
输出连接成的大字符串。
然后修改上述程序，用空格把输入的多个字符串分割开来。
*/
int main()
{
    string s;
    string sum_s;
    while(cin >> s)
    {
        sum_s = sum_s + s;
        sum_s = sum_s + " ";
    }
    cout << sum_s;
    return 0;
}
