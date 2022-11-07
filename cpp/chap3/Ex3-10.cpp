#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string s("Xiannian Hu, which is a pig, benben!");
    // decltype (s.size()) index = 0;
    string s_new;
    for (auto charac : s)
    {
        if (!ispunct(charac))
        {
            s_new += charac;
        }
    }
    cout << s << endl;
    cout << s_new << endl;
    return 0;
}
