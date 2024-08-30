// LUOGU_RID: 163688819
#include <bits/stdc++.h>
using namespace std;
string s[55], x;
int a[55];
int main()
{
    bool b = 0;
    int n, z = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i] >> a[i];
    cin >> x;
    for (int i = 1; i <= n; i++)
    {
        if (b)
            z += a[i];
        else
        {
            if (x == s[i])
                b = 1;
        }
    }
    cout << z;
    cout << endl;
    return 0;
}