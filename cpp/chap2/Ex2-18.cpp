#include <iostream>
using namespace std;
// 编写代码更改指针的值/指针所指对象的值
int main()
{
    int val = 256;
    int val2 = 50;
    int *pi = &val; //pi指向val
    *pi = 250; //更改指针所指对象的值
    cout << *pi << endl;
    pi = &val2; //更改指针的值
    cout << *pi << endl;
    return 0;
}
