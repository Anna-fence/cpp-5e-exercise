#include <iostream>
using namespace std;
int main()
{
    cout << "Input two Integer(num1 should smaller than num2)" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    while (num2-num1 > 1)
    {
        ++num1;
        cout << num1;
        cout << " ";
    }
    cout << endl;
    return 0;
}
