#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
/*
��дһ�γ���ӱ�׼�����ж������ַ�����������������һ��
������ӳɵĴ��ַ�����
Ȼ���޸����������ÿո������Ķ���ַ����ָ����
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
