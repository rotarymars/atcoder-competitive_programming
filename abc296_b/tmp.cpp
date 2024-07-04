#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    for (int i = 8; i > 0; i--)
    {
        cin >> s;
        for (int j = 0; j < 8; j++)
        {
            if (s[j] == '*')
            {
                cout << (char)('a' + j) << i << endl;
            }
        }
    }
    return 0;
}