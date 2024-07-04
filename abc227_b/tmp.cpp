#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }
    int count = N;
    vector<int> a(1010, 0);
    for (int i = 1; i < 200; i++)
    {
        for (int j = 1; j < 200; j++)
        {
            int S;
            S = (4 * i * j) + 3 * (i + j);
            if (S <= 1000)
            {
                a[S] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (a[vec[i]] == 1)
        {
            count--;
        }
    }
    cout << count << endl;
}
