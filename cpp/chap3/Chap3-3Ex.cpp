#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("hello World");
    for(decltype(s.size()) index = 0;
    index<s.size() && !isspace(s[index]);
    ++index)
    s[index] = toupper(s[index]);
    cout << s;
    return 0;
}
