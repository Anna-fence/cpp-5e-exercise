#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s("xiannian hu pig pig");
    cout << s << endl;
    decltype (s.size()) cnt = 0;
    for (auto &c : s)
    {
        if (!isspace(c))
            c = 'X';
    }
    cout << s << endl;
    return 0;
}
