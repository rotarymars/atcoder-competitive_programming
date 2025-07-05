#include <bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i < (int)(r); i++)

using vi = vector<int>; using vvi = vector<vi>; using vvvi = vector<vvi>;
using vs = vector<string>;
using vc = vector<char>;
using vvc = vector<vector<char>>;
using ll = long long;
using vl = vector<ll>; using vvl = vector<vl>; using vvvl = vector<vvl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T>
void v_cout(T &vec) {
    for (auto k : vec) cout << k << ' ';
    cout << endl;
    return;
}

template<typename S>
void vv_cout(S &vec) {
    for (auto v : vec) {
        for (auto k : v) cout << k << ' ';
        cout << endl;
    }
    return;
}
template<typename T>
void chmax(T &a, T b) { a = max(a, b);}
template<typename T>
void chmin(T &a, T b) { a = min(a, b);}
//getlineの使い方： getline(cin, (stringの変数名))
//#pragma GCC optimize("Ofast")
//--------------------------------------------------

int main() {
    int T;
    cin >> T;
    int N, M;
    cin >> N;
    vi A(N);
    rep(i, 0, N) cin >> A[i];
    cin >> M;
    vi B(M);
    rep(i, 0, M) cin >> B[i];
    A.push_back(1e9);
    int id = 0;
    bool judge = true;
    rep(i, 0, M) {
        while(true) {
            if(B[i] < A[id]) {
                judge = false;
                break;
            }
            if(B[i] - A[id] > T) id++;
            else break;
        } 
        id++;
        if(!judge) break;
    }
    if(judge) cout << "yes" << endl;
    else cout << "no" << endl;
}