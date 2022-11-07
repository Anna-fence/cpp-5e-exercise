/*
* 注意这个程序需要给一个EOF才能吐出对最后一组相同的数的统计结果
*/

#include <iostream>
using namespace std;
int main()
{
    int currval = 0, val = 0;
    if(cin >> currval)
    {
        int cnt = 1;
        while(cin >> val)
        {
            if(val == currval)
            {
                ++ cnt;
            }
            else
            {
                cout << currval << " occurs " << cnt << " times." << endl;
                cnt = 1;
            }
            currval = val;
        }
        cout << currval << " occurs " << cnt << " times." << endl;
    }
    return 0;
}
