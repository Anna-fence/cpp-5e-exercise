#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 0;
    while(cin >> num)
    {
        sum += num;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
