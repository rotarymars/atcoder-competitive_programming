#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
// using mint = modint1000000007;
#endif

/*♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
大谷映美里ちゃん可愛い
1.5ミリおおたにえみり
みりにゃを一生推すことに決めました。
「絶対寝ちゃダメ！はい、約束。」
♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡*/

using ll = long long;            // 9,223,372,036,854,775,807 2^63-1
using ul = unsigned long;        // 18,446,744,073,709,551,615 2^64-1
using ull = unsigned long long;  // 18,446,744,073,709,551,615 2^64-1
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vvl = vector<vector<ll>>;
using vvs = vector<vector<string>>;
using vvc = vector<vector<char>>;
using vvb = vector<vector<bool>>;
using P = pair<ll, ll>;
using Graph = vector<vector<ll>>;
const int inf = 1073741823;
const ll INF = 1LL << 60;
const string ALP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string alp = "abcdefghijklmnopqrstuvwxyz";
//
/*右,下,左,上 */
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
//
#define ALL(a) (a).begin(), (a).end()
#define rALL(a) (a).rbegin(), (a).rend()
#define PUF push_front
#define POF pop_front
#define PUB push_back
#define POB pop_back
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define fst first
#define snd second
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define YesNo(bool) \
    if (bool)       \
        Yes;        \
    else            \
        No;
#define YESNO(bool) \
    if (bool)       \
        YES;        \
    else            \
        NO;
#define spa " "
#define FLAG cout << "#みりらーめん🍥" << endl
#define debug(x) cerr << #x << " = " << x << endl

template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    os << "{" << p.fst << ", " << p.snd << "}";
    return os;
}

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
/*-------------------------------------------------*/

// 構造体
struct Edge {
    ll to;      // 辺の行き先
    ll weight;  // 辺の重み
    Edge(ll t, ll w) : to(t), weight(w) {}
};

using GraphWeight = vector<vector<Edge>>;

/*-------------------------------------------------*/

#if __has_include(<atcoder/all>)

const int MAX = 4000010;
mint fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    const int MOD = mint::mod();
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fac[i] = fac[i - 1] * i;
        inv[i] = MOD - inv[MOD % i] * (MOD / i);
        finv[i] = finv[i - 1] * inv[i];
    }
}

// 二項係数計算
mint COM(int n, int k) {
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * finv[k] * finv[n - k];
}

#endif

/*-------------------------------------------------*/

// aとbの最大公約数 gcd(Greatest Common Divisor)
ll gcd(ll a, ll b) {
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}

/*-------------------------------------------------*/

// aとbの最小公倍数 lcm(Least Common Multiple)
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/*-------------------------------------------------*/

// n進数をm進数に
void ntom(const string str, const ll n, const ll m, string &res) {
    ll sum = 0;

    for (char c : str) {  // str = n進法の数値, n^(i-1)乗でsumに加算
        sum = sum * n + (c - '0');
    }

    res = "";
    do {
        ll num = sum % m;
        res = static_cast<char>(num + '0') + res;
        sum /= m;
    } while (sum);  // sumが0になるまで
}

/*-------------------------------------------------*/

// 素数判定
bool IsPrime(ll x) {
    if (x < 2) {
        return false;
    } else if (x == 2) {
        return true;
    } else if (x % 2 == 0) {
        return false;
    }

    double sqrtx = sqrt(x);
    for (ll i = 3; i <= sqrtx; i += 2) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

/*-------------------------------------------------*/

// 約数列挙
vector<ll> EnumDiv(ll x) {
    vl res;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            res.PUB(i);
            if (x / i != i) res.PUB(x / i);
        }
    }

    sort(ALL(res));
    return res;
}

/*-------------------------------------------------*/

// 素因数分解
vector<P> PrimeFact(ll x) {
    vector<P> res;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i != 0) continue;
        ll ex = 0;  // 指数
        while (x % i == 0) {
            ex++;
            x /= i;
        }

        res.PUB({i, ex});
    }

    if (x != 1) res.PUB({x, 1});
    return res;
}

/*-------------------------------------------------*/

// Fibonacci数列
ll Fibonacci(ll x) {
    if (x <= 2) {
        return 1;
    } else {
        return Fibonacci(x - 2) + Fibonacci(x - 1);
    }
}

/*-------------------------------------------------*/
ll n, k;
bool flag = false;
int t[10][10];

void cal(ll ans, ll cnt){
    if(cnt == n){
      // バグ発見
      if(ans == 0) flag = true;
      return;
    }
    
    rep(i, k){
      cal(ans ^ t[cnt][i], cnt + 1);
    }
}

void solve() {
    cin >> n >> k;
    rep(i, n){
      rep(j, k){
        cin >> t[i][j];
      }
    }
    
    cal(0, 0);
    
    if(flag){
      cout << "Found" << endl;
    }else{
      cout << "Nothing" << endl;
    }
}

int main() {
    cout << fixed << setprecision(15);
    // cerr << fixed << setprecision(15);
    solve();
    return 0;
}