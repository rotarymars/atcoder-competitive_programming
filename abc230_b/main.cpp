#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for (string T : {"oxx", "xox", "xxo"})
    {
        bool ok = true;
        for (int i = 0; i < (int)S.size(); i++)
        {
            if (T[i % 3] != S[i])
                ok = false;
        }
        if (ok)
        {
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
}
