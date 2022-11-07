#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("xiannian hu");
    cout << s << endl;
//    decltype (s.size()) cnt = 0;
//    while (cnt < s.size())
//    {
//        if (!isspace(s[cnt]))
//            s[cnt] = 'X';
//        ++cnt;
//    }
    for (decltype (s.size()) cnt = 0;
    cnt < s.size();
    ++cnt)
    {
        if (!isspace(s[cnt]))
            s[cnt] = 'X';
    }
    cout << s << endl;
    return 0;
}
