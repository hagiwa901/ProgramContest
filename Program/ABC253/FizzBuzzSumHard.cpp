// https://atcoder.jp/contests/abc253/tasks/abc253_d
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define FORR(i, m, n) for (int i = m; i >= n; i--)
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define ll long long
#define ull unsigned long long
#define pb(a) push_back(a)
#define INF 100000000001
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;
 
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

ull gcd(ull a, ull b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ull lcm(ull a, ull b) {
    ull d = gcd(a, b);
    return a / d * b;
}

int main()
{
    ull n, a, b, sum_a=0, sum_b=0, sum_l=0;
    cin >> n >> a >> b;
    if(a == 1 || b == 1){
        cout << 0 << endl;
        return 0;
    }
    ull d = lcm(a, b);
    for(ull i=a; i<=n; i += a) sum_a += i;
    for(ull i=b; i<=n; i += b) sum_b += i;
    for(ull i=d; i<=n; i += d) sum_l += i; 
    cout << n * (n + 1) / 2 - sum_a - sum_b + sum_l << endl;
}