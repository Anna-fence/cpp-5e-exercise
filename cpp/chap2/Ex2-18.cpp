#include <iostream>
using namespace std;
// ��д�������ָ���ֵ/ָ����ָ�����ֵ
int main()
{
    int val = 256;
    int val2 = 50;
    int *pi = &val; //piָ��val
    *pi = 250; //����ָ����ָ�����ֵ
    cout << *pi << endl;
    pi = &val2; //����ָ���ֵ
    cout << *pi << endl;
    return 0;
}
