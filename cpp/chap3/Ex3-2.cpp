#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    一次读入一行 Ex3-2
    string line;
    while(getline(cin, line))
    {
        cout << line << endl;
    }
    */


//    一次读入一个单词 Ex3-3
    string word;
    while(cin >> word)
    {
        cout << word << endl;
    }

    return 0;
}
