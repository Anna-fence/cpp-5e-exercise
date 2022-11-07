#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "s1 is as big as s2!" << endl;
    else if (s1 > s2)
        cout << "The bigger string is "<< s1 << endl;
    else
        cout << "The bigger string is "<< s2 << endl;

    if (s1.size() == s2.size())
        cout << "s1 is as long as s2!" << endl;
    else if (s1.size() > s2.size())
        cout << "The longer string is "<< s1 << endl;
    else
        cout << "The longer string is "<< s2 << endl;
    return 0;
}
